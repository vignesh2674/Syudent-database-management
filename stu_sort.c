#include"student.h"
void sort(SLL *ptr,char choice)
{
    if(ptr==0)
    {
        printf("No records found.\n");
        return;
    }
    int c=0;
    SLL *temp=ptr;
    while(temp)
    {
        c++;
        temp=temp->next;
    }
    SLL *p1=ptr,*p2;
    SLL t;
    int i,j;
    for(i=0;i<c-1;i++)
    {
        p2=p1->next;
        for(j=0;j<c-1-i;j++)
        {
            int flag=0;
            if(choice =='n'||choice=='N')
            {
                if(strcmp(p1->name,p2->name)>0)
                    flag = 1;
            }
            else if(choice=='p'||choice=='P')
            {
                if(p1->percentage<p2->percentage)
                    flag=1;
            }
            if (flag)
            {
                t.rollno=p1->rollno;
                strcpy(t.name,p1->name);
                t.percentage=p1->percentage;

                p1->rollno=p2->rollno;
                strcpy(p1->name,p2->name);
                p1->percentage=p2->percentage;

                p2->rollno=t.rollno;
                strcpy(p2->name,t.name);
                p2->percentage=t.percentage;
            }
            p2 = p2->next;
        }
        p1 = p1->next;
    }
    printf("List sorted successfully.\n");
}
