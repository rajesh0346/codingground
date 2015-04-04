#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node *next;
};
typedef struct node *nodeptr;

void printlist(nodeptr head)
{
    while(head){
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}
nodeptr getnode(int val)
{
    nodeptr tmp = (nodeptr)malloc(sizeof(struct node));
    tmp->val = val;
    tmp->next = NULL;
    return tmp;
}

nodeptr insert(nodeptr head, nodeptr node)
{
    if (head) {
        node->next = head;
    }
    return node;
}

nodeptr createnode()
{
    nodeptr head = NULL;
    head = insert(head, getnode(1));
    head = insert(head, getnode(2));
    head = insert(head, getnode(3));
    head = insert(head, getnode(4));
    head = insert(head, getnode(5));
    head = insert(head, getnode(6));
    head = insert(head, getnode(7));
    return head;
}

int main()
{
    nodeptr head = createnode();
    printlist(head);
    
    return 0;
}