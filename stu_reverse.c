#include "student.h"
void rev(SLL **ptr)
{
    if(*ptr==0)
    {
        printf("No records found.\n");
        return;
    }
    SLL *curr=*ptr,*prev=0,*next=0;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *ptr = prev;
    printf("List reversed successfully.\n");
}
