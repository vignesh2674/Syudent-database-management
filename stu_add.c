#include"student.h"
void add(SLL **ptr)
{
    int roll = 1;
    SLL *new,*temp;
    new=malloc(sizeof(SLL));
    if(!new)
    {
        printf("Memory allocation failed!\n");
        return;
    }
    while(1)
    {
        temp=*ptr;
        while(temp)
        {
            if(temp->rollno==roll)
                break;
            temp=temp->next;
        }
        if(temp==0)
            break;
        roll++;
    }
    new->rollno=roll;
    printf("Enter name and percentage:\n");
    scanf("%s%f",new->name,&new->percentage);
    while(new->percentage<0.00||new->percentage>100.00)
    {
        printf("Invalid percentage!");
        scanf("%f",&new->percentage);
    }
    if((*ptr==0)||((new->rollno)<((*ptr)->rollno)))
    {
        new->next=*ptr;
        *ptr=new;
    }
    else
    {
        SLL *pos=*ptr;
        while((pos->next!=0)&&(new->rollno>pos->next->rollno))
            pos=pos->next;
        new->next=pos->next;
        pos->next=new;
    }
}
