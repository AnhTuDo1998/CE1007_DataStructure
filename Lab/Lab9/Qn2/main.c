#include <stdio.h>
#include <stdlib.h>

typedef struct listnode{
    int number;
    struct listnode *next_node;
    }ListNode;

int searchList(ListNode *head, int value);

int main()
{
    int i, search_value, index;
    ListNode *head = NULL;
    ListNode *node;
    printf("Enter a list of numbers, terminated by the value -1: \n");
    scanf("%d",&i);
    while (i != -1){
        if (head == NULL){
            head = malloc(sizeof(ListNode)); //allocate only if the number is not the terminating value and no first node yet
            node = head;
        }
        else{
            node->next_node = malloc(sizeof(ListNode)); //allocate next node to previous nodde should more than one already exist
            node = node->next_node;
        }
        node->number = i;
        scanf("%d",&i);
    }
    node->next_node = NULL;
    node = head;
    printf("Current list: ");
    while(node!=NULL){
        printf(" %d",node->number);
        node = node->next_node;
    } //for node address to be determined (not null), print the integer stored at that node
    printf("\n");
    printf("Enter value to search for: ");
    scanf("%d",&search_value);
    index = searchList(head, search_value);
    if(index!=-1){
        printf("Value %d found at index %d",search_value,index);
    }
    else
        printf("Cannot find!");

    //Wrong:
    /*ListNode *p = head;
    while (p!= NULL) {
    free(p);
    p=p->next;
    }
    */
    //reason: free p means deallocated, but value of p might change to somewhere else and not the current node which store
    //location of next node -> might deallocate some special function memory -> crash

    //fix
    ListNode *temp;
    node = head; // point node to first node (which is pointed to by a head)
    while (node!= NULL) {
        temp = node->next_node;
        free(node);
        node=temp;
    }
    head = NULL; // should set head to null (else there will still be a list


}

int searchList(ListNode *head, int value){
    ListNode *node;
    int index = 1;
    node = head;
    while (node != NULL){ //search for the value by traversing the nodes via next node and head address
        if (node->number == value){
            return index;
        }
        else{
            node = node->next_node;
            index++;
        }
    }
    return -1;
}
