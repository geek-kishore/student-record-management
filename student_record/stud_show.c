#include "student.h"

extern STUD *head;

void stud_show()
{
    STUD *temp;

    if (head == NULL)
    {
        printf("\nNo Records Found...\n");
        return;
    }

    printf("\n-------------------------------------------------\n");
    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Percentage");
    printf("-------------------------------------------------\n");

    temp = head;

    while (temp != NULL)
    {
        printf("%-10d %-20s %-10.2f\n",
               temp->roll,
               temp->name,
               temp->per);

        temp = temp->next;
    }

    printf("-------------------------------------------------\n");
}
