#include"student.h"
void mod(SLL *ptr,char choice)
{
    if(ptr==0)
    {
        printf("No records found.\n");
        return;
    }
    SLL *temp=ptr;
    int count=0;
    if (choice=='r'||choice=='R')
    {
        int num,found=0;
        printf("Enter rollno:\n");
        scanf("%d",&num);
        while(temp)
        {
            if(num==temp->rollno)
            {
                found=1;
                printf("Current details: %d %s %.2f\n",temp->rollno,temp->name,temp->percentage);
                printf("Enter updated name and percentage:\n");
                scanf("%s%f",temp->name,&temp->percentage);
                printf("Record modified successfully.\n");
                return;
            }
            temp=temp->next;
        }
        if(!found)
            printf("Roll number not found.\n");
    }
    else if(choice=='n'||choice=='N')
    {
        char name[50];
        printf("Enter name:\n");
        scanf("%s",name);
        while(temp)
        {
            if(strcmp(temp->name,name)==0)
            {
                count++;
                printf("%d %s %.2f\n",temp->rollno,temp->name,temp->percentage);
            }
            temp=temp->next;
        }
        if(count==0)
        {
            printf("Name not found.\n");
            return;
        }
        else if(count==1)
        {
            temp=ptr;
            while(temp)
            {
                if(strcmp(temp->name,name)==0)
                {
                    printf("Enter updated name and percentage:\n");
                    scanf("%s%f",temp->name,&temp->percentage);
                    printf("Record modified successfully.\n");
                    return;
                }
                temp=temp->next;
            }
        }
        else
        {
            int num1;
            printf("Enter rollno:\n");
            scanf("%d",&num1);
            temp=ptr;
            while(temp)
            {
                if(num1==temp->rollno)
                {
                    printf("Enter updated name and percentage:\n");
                    scanf("%s%f",temp->name,&temp->percentage);
                    printf("Record modified successfully.\n");
                    return;
                }
                temp=temp->next;
            }
            printf("Roll number not found.\n");
        }
    }
    else if(choice=='p'||choice=='P')
    {
        float num2;
        printf("Enter percentage:\n");
        scanf("%f", &num2);
        while(temp)
        {
            if(temp->percentage==num2)
            {
                count++;
                printf("%d %s %.2f\n",temp->rollno,temp->name,temp->percentage);
            }
            temp=temp->next;
        }
        if(count==0)
        {
            printf("Percentage not found.\n");
            return;
        }
        else if(count==1)
        {
            temp=ptr;
            while(temp)
            {
                if(temp->percentage==num2)
                {
                    printf("Enter updated name and percentage:\n");
                    scanf("%s%f",temp->name,&temp->percentage);
                    printf("Record modified successfully.\n");
                    return;
                }
                temp=temp->next;
            }
        }
        else
        {
            int num3;
            printf("Multiple records found. Enter rollno:\n");
            scanf("%d",&num3);
            temp=ptr;
            while(temp)
            {
                if(temp->rollno==num3)
                {
                    printf("Enter updated name and percentage:\n");
                    scanf("%s%f",temp->name,&temp->percentage);
                    printf("Record modified successfully.\n");
                    return;
                }
                temp=temp->next;
            }
            printf("Roll number not found.\n");
        }
    }
}
