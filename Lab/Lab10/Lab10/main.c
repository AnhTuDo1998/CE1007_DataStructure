// CE1007/CZ1007 Data Structures
// Week 10 Lab Tutorial - Linked List

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////
////////////

typedef struct _listnode{
	int num;
	struct _listnode *next;
} ListNode;

typedef struct _linkedlist{
	ListNode *head;
	int size;
} LinkedList;

////////////////////////////////////////////////////////////////////////////////

int removeNode(ListNode **ptrHead, int index);
int removeNode2(LinkedList *ll, int index);
int split(ListNode *head, ListNode **ptrEvenList, ListNode **ptrOddList);
int duplicateReverse(ListNode *head, ListNode **ptrNewHead);

void printList(ListNode *head);
ListNode * findNode(ListNode *head, int index);
int insertNode(ListNode **ptrHead, int index, int value);

////////////////////////////////////////////////////////////////////////////////

int main()
{
	int i;
	ListNode *head = NULL;
	ListNode *dupRevHead = NULL;
	ListNode *oddHead = NULL;
	ListNode *evenHead = NULL;
	ListNode *list1Head = NULL, *list2Head = NULL;
	ListNode *combAltHead = NULL;
	LinkedList llist;
	int size = 0;

	//build a linked list
	if (insertNode(&head, 0, 6) == 0) size++;
	if (insertNode(&head, 0, 4) == 0) size++;
	if (insertNode(&head, 0, 2) == 0) size++;
	printf("After inserting 3 values.");
	printList(head);


	//removeNode(): question 1
	if (removeNode(&head, 3) == 0) size--;//this one can't be removed.
	if (removeNode(&head, 1) == 0) size--;
	if (removeNode(&head, 0) == 0) size--;

	printf("\nafter remove using removeNode(), ");
	printList(head);

	//insert some nodes
	if (insertNode(&head, 2, 3) == 0) size++; // this one can't be inserted.
	if (insertNode(&head, 1, 1) == 0) size++;
	if (insertNode(&head, 0, 0) == 0) size++;

	printf("\nafter insert, ");
	printList(head);

	//removeNode2(): question 2
	llist.head = head;
	llist.size = size;
	removeNode2(&llist, 2);
	removeNode2(&llist, 0);
	removeNode2(&llist, 0);
	head = llist.head;


	printf("\nafter remove using removeNode2(), ");
	printList(llist.head);
	// empty linked list now

	//split(): question 3
	for (i = 1; i <10; i++)//build a new linked list
		insertNode(&head, 0, i);
	printf("\n\ninsert 1-9 to the linked list,");
	printList(head);
	printf("split the current list, results:\n");
	split(head, &evenHead, &oddHead);
	printf("the even list");
	printList(evenHead);
	printf("the odd list");
	printList(oddHead);

	//duplicateReverse(): question 4
	printf("\n");
	printList(head);
	duplicateReverse(head, &dupRevHead);
	printf("After duplicateReverse(),");
	printList(dupRevHead);
}

////////////////////////////////////////////////////////////////////////////////

void printList(ListNode *head){
	ListNode *cur = head;

	if (cur == NULL)
		return;

	printf("the current linked list is:\n");
	while (cur != NULL){
		printf("%d ", cur->num);
		cur = cur->next;
	}
	printf("\n");
}

ListNode * findNode(ListNode *head, int index){
	if (head == NULL || index < 0) return NULL;
	while (index > 0){
		head = head->next;
		if (head == NULL)
			return NULL;
		index--;
	}
	return head;
}

int insertNode(ListNode **ptrHead, int index, int value){
	ListNode *pre, *cur;
	// If empty list or inserting first node, need to update head pointer
	if (*ptrHead == NULL || index == 0){
		cur = *ptrHead;
		*ptrHead = malloc(sizeof(ListNode));
		(*ptrHead)->num = value;
		(*ptrHead)->next = cur;
		return 0;
	}
	// Find the nodes before and at the target position
	// Create a new node and reconnect the links
	if ((pre = findNode(*ptrHead, index - 1)) != NULL){
		cur = pre->next;
		pre->next = malloc(sizeof(ListNode));
		pre->next->num = value;
		pre->next->next = cur;
		return 0;
	}
	return -1;
}

////////////////////////////////////////////////////////////////////////////////

int removeNode(ListNode **ptrHead, int index){

	// write your code here
	ListNode *pre, *cur; //creating pointer to keep track of before and after nodes to link tgt after remove
    // if list is empty, or removing index smaller than 0 (not possible, then return -1)
    if (*ptrHead == NULL)
        return -1;

    // if removing first node then need to update the head pointer to the next node
    if (index == 0){
        cur = *ptrHead;
        *ptrHead = cur-> next; // change head to the next node after first node
        free(cur) //deallocate
        return 0;
    }

    //if removing somewhere different than 1st node -> no need update head pointer but need to keep track of pre and cur
    //connect the node before and the next one tgt after remove
    //first need to find the before node, which ought not to be Null, if it is null then fail
    if ((pre = findNode(*ptrHead,index-1))!=NULL){
        if (pre->next==NULL) //check whether this index-1 is at the end of the list node ? if yes, nothing to do
            return -1;

        cur = pre->next; //keep track of current node
        pre->next = cur->next; //link the previous node to the node after the node being remove
        free(cur); //delete node
        return 0;
    }
    return -1; // if index out of range.

}

////////////////////////////////////////////////////////////////////////////////

int removeNode2(LinkedList *ll, int index) {

	// write your code here
	ListNode *pre, *cur;

	// Highest index we can remove is size-1
	if (ll == NULL || index < 0 || index >= ll->size)
		return -1;

	// If removing first node, need to update head pointer
	if (index == 0){
		cur = ll->head; //(point to first node)
		ll->head = cur->next; //(update head to the next node (after first node)
		free(cur)
		ll->size--;

		return 0;
	}

	// Find the nodes before and after the target position
	// Free the target node and reconnect the links
	if ((pre = findNode(ll->head, index - 1)) != NULL){

		if (pre->next == NULL)
			return -1;

		cur = pre->next;
		pre->next = cur->next;
		free(cur);
		ll->size--;
		return 0;
	}

	return -1;
}

////////////////////////////////////////////////////////////////////////////////

int split(ListNode *head, ListNode **ptrEvenList, ListNode **ptrOddList)
{

	// write your code here
	//set up a current pointer to traverse the list.
	int index_odd = 0;
	int index_even = 0;
	ListNode *cur;
	cur = head;
	// if empty list, then can return other two lists to be empty too!
	if(cur == NULL)
        return -1;
    else{
        while (cur!= NULL){
            if ((cur->num)%2==0){
                insertNode(ptrEvenList,index_even,cur->num);
                index_even++;
                cur=cur->next;
            }
            else if ((cur->num)%2!=0){
                insertNode(ptrOddList,index_odd,cur->num);
                index_odd++;
                cur=cur->next;
            }
        }
        return 0;
    }

}

////////////////////////////////////////////////////////////////////////////////

int duplicateReverse(ListNode *head, ListNode **ptrNewHead){
    ListNode *cur;
    cur = head;
	// write your code here
	//if empty list, nothing to do
	if(cur==NULL){
        return -1;
	}
	//else, trsverse and keep adding at index 0 -> push the rest out.
	else{
        while (cur!=NULL){
            insertNode(ptrNewHead,0,cur->num); //insert node here requires a pointer to a pointer as an argument, so no need to add star)
            cur = cur->next;
        }
        return 0;
	}
}

////////////////////////////////////////////////////////////////////////////////
