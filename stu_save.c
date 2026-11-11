#include "student.h"
void save(SLL *ptr)
{
    if(ptr==0)
    {
        printf("No records available to save.\n");
        return;
    }
    FILE *fp=fopen("student.dat","w");
    if(fp==0)
    {
        printf("Error opening file for writing.\n");
        return;
    }
    while(ptr)
    {
        fprintf(fp,"%d %s %.2f\n",ptr->rollno,ptr->name,ptr->percentage);
        ptr=ptr->next;
    }
    printf("Data saved successfully.\n");
    fclose(fp);
}
