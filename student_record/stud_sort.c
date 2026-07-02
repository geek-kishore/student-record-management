#include "student.h"

extern STUD *head;

void swap(STUD *a, STUD *b)
{
    int roll;
    float per;
    char name[30];

    roll = a->roll;
    a->roll = b->roll;
    b->roll = roll;

    strcpy(name, a->name);
    strcpy(a->name, b->name);
    strcpy(b->name, name);

    per = a->per;
    a->per = b->per;
    b->per = per;
}

void stud_sort()
{
    STUD *p, *q;
    char ch;

    if(head == NULL)
    {
        printf("\nNo Records Found...\n");
        return;
    }

    printf("\nN/n : Sort by Name");
    printf("\nP/p : Sort by Percentage");

    printf("\n\nEnter Your Choice : ");
    scanf(" %c", &ch);

    if(ch=='N'||ch=='n')
    {
        for(p=head;p!=NULL;p=p->next)
        {
            for(q=p->next;q!=NULL;q=q->next)
            {
                if(strcmp(p->name,q->name)>0)
                    swap(p,q);
            }
        }

        printf("\nSorted by Name Successfully.\n");
    }

    else if(ch=='P'||ch=='p')
    {
        for(p=head;p!=NULL;p=p->next)
        {
            for(q=p->next;q!=NULL;q=q->next)
            {
                if(p->per > q->per)
                    swap(p,q);
            }
        }

        printf("\nSorted by Percentage Successfully.\n");
    }

    else
    {
        printf("\nInvalid Choice\n");
    }
}
