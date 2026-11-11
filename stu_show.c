#include"student.h"
void show(SLL *ptr)
{
    if(ptr==0)
    {
        printf("No student records available.\n");
        return;
    }
    printf("-------------------------------------------------\n");
    printf("%-10s %-20s %-10s\n","Roll No.","Name","Percentage");
    printf("-------------------------------------------------\n");
    while(ptr)
    {
        printf("%-10d %-20s %-10.2f\n",ptr->rollno,ptr->name,ptr->percentage);
        ptr=ptr->next;
    }
    printf("-------------------------------------------------\n");
}
