#include "student.h"

extern STUD *head;

void stud_save()
{
    FILE *fp;
    STUD *temp;

    fp = fopen("student.dat", "wb");

    if(fp == NULL)
    {
        printf("\nUnable to Open File...\n");
        return;
    }

    temp = head;

    while(temp)
    {
        fwrite(temp, sizeof(STUD), 1, fp);
        temp = temp->next;
    }

    fclose(fp);

    printf("\nRecords Saved Successfully.\n");
}

void stud_load()
{
    FILE *fp;
    STUD *newnode, *temp;

    fp = fopen("student.dat", "rb");

    if(fp == NULL)
        return;

    while(1)
    {
        newnode = (STUD *)malloc(sizeof(STUD));

        if(fread(newnode, sizeof(STUD), 1, fp) != 1)
        {
            free(newnode);
            break;
        }

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;

            while(temp->next)
                temp = temp->next;

            temp->next = newnode;
        }
    }

    fclose(fp);
}
