#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct student
{
    int rollno;
    char name[50];
    float percentage;
    struct student *next;
} SLL;

void add(SLL **);
void del(SLL **, char);
void show(SLL *);
void mod(SLL *,char);
void save(SLL *);
void load(SLL **);
void sort(SLL *,char);
void rev(SLL **);
void del_all(SLL **);
