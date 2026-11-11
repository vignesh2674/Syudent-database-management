#include"student.h"
void del(SLL **ptr,char choice)
{
    if(*ptr==0)
    {
        printf("No records found.\n");
        return;
    }
    if (choice=='r'||choice=='R')
    {
        int num;
        printf("Enter rollno to delete:\n");
        scanf("%d",&num);
        SLL *del=*ptr,*prev=0;
        while(del)
        {
            if(num==del->rollno)
            {
                if(*ptr==del)
                    *ptr=del->next;
                else
                    prev->next=del->next;
                free(del);
                printf("Record deleted successfully.\n");
                return;
            }
            prev=del;
            del=del->next;
        }
        printf("Roll number not found.\n");
    }
    else if(choice=='n'||choice=='N')
    {
        char name[50];
        printf("Enter name to delete:\n");
        scanf("%s",name);
        int count=0;
        SLL *del1=*ptr;
        while(del1)
        {
            if(strcmp(name,del1->name)==0)
            {
                count++;
                printf("%d %s %.2f\n",del1->rollno,del1->name,del1->percentage);
            }
            del1=del1->next;
        }
        if(count==0)
        {
            printf("Name not found.\n");
            return;
        }
        else if(count==1)
        {
            SLL *del2=*ptr,*prev1=0;
            while(del2)
            {
                if(strcmp(del2->name,name)==0)
                {
                    if(*ptr==del2)
                        *ptr=del2->next;
                    else
                        prev1->next=del2->next;
                    free(del2);
                    printf("Record deleted successfully.\n");
                    return;
                }
                prev1 = del2;
                del2 = del2->next;
            }
        }
        else
        {
            int num;
            printf("Multiple records found.Enter rollno to delete.\n");
            scanf("%d",&num);
            SLL *del3=*ptr,*prev2=0;
            while (del3)
            {
                if(num==del3->rollno && strcmp(del3->name,name)==0)
                {
                    if (*ptr==del3)
                        *ptr=del3->next;
                    else
                        prev2->next=del3->next;
                    free(del3);
                    printf("Record deleted successfully.\n");
                    return;
                }
                prev2=del3;
                del3=del3->next;
            }
            printf("Roll number not found.\n");
        }
    }
}
