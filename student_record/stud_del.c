#include "student.h"

extern STUD *head;

void stud_del()
{
    STUD *temp, *prev;
    int roll;
    char ch;
    char name[30];

    if(head==NULL)
    {
        printf("\nNo Records Found...\n");
        return;
    }

    printf("\nR/r : Delete using Roll Number");
    printf("\nN/n : Delete using Name");

    printf("\n\nEnter Your Choice : ");
    scanf(" %c",&ch);

    if(ch=='R'||ch=='r')
    {
        printf("\nEnter Roll Number : ");
        scanf("%d",&roll);

        temp=head;
        prev=NULL;

        while(temp)
        {
            if(temp->roll==roll)
            {
                if(prev==NULL)
                    head=temp->next;
                else
                    prev->next=temp->next;

                free(temp);

                printf("\nRecord Deleted Successfully\n");
                return;
            }

            prev=temp;
            temp=temp->next;
        }

        printf("\nRecord Not Found\n");
    }

    else if(ch=='N'||ch=='n')
    {
        printf("\nEnter Name : ");
        scanf(" %[^\n]",name);

        temp=head;

        printf("\nMatching Records\n");
        printf("------------------------------------------\n");
        printf("Roll\tName\t\tPercentage\n");
        printf("------------------------------------------\n");

        while(temp)
        {
            if(strcmp(temp->name,name)==0)
                printf("%d\t%s\t\t%.2f\n",
                temp->roll,temp->name,temp->per);

            temp=temp->next;
        }

        printf("\nEnter Roll Number to Delete : ");
        scanf("%d",&roll);

        temp=head;
        prev=NULL;

        while(temp)
        {
            if(temp->roll==roll)
            {
                if(prev==NULL)
                    head=temp->next;
                else
                    prev->next=temp->next;

                free(temp);

                printf("\nRecord Deleted Successfully\n");
                return;
            }

            prev=temp;
            temp=temp->next;
        }

        printf("\nRecord Not Found\n");
    }

    else
    {
        printf("\nInvalid Choice\n");
    }
}
