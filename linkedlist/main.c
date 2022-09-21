#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    printf("Hello world!\n");
    struct Node *new=(struct Node*)malloc(sizeof(struct Node));
    printf("after malloc\n");
    new->data=2;
    printf("after data\n");
    new->next=0;
    printf("after next\n");
    printf("hello %d",new->data);
    return 0;
}
