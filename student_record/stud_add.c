#include "student.h"

extern STUD *head;

/* Find the smallest available positive roll number */
int get_roll()
{
    int roll = 1;
    STUD *p;

    while (1)
    {
        int found = 0;
        p = head;

        while (p)
        {
            if (p->roll == roll)
            {
                found = 1;
                break;
            }
            p = p->next;
        }

        if (!found)
            return roll;

        roll++;
    }
}

void stud_add()
{
    STUD *newnode, *temp;

    newnode = (STUD *)malloc(sizeof(STUD));

    if (newnode == NULL)
    {
        printf("\nMemory Allocation Failed\n");
        return;
    }

    newnode->roll = get_roll();

    printf("\nEnter Student Name : ");
    scanf(" %[^\n]", newnode->name);

    printf("Enter Percentage : ");
    scanf("%f", &newnode->per);

    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newnode;
    }

    printf("\nRecord Added Successfully\n");
    printf("Assigned Roll Number : %d\n", newnode->roll);
}
