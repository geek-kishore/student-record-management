#include "student.h"

extern STUD *head;

void stud_mod()
{
    STUD *temp;
    char ch, option;
    int roll;
    float per;
    char name[30];

    if(head == NULL)
    {
        printf("\nNo Records Found...\n");
        return;
    }

    printf("\nSearch Record By\n");
    printf("R/r : Roll Number\n");
    printf("N/n : Name\n");
    printf("P/p : Percentage\n");

    printf("\nEnter Your Choice : ");
    scanf(" %c", &ch);

    temp = head;

    if(ch == 'R' || ch == 'r')
    {
        printf("Enter Roll Number : ");
        scanf("%d", &roll);

        while(temp)
        {
            if(temp->roll == roll)
            {
                printf("\nModify Field\n");
                printf("N/n : Name\n");
                printf("P/p : Percentage\n");

                printf("Enter Choice : ");
                scanf(" %c", &option);

                if(option == 'N' || option == 'n')
                {
                    printf("Enter New Name : ");
                    scanf(" %[^\n]", temp->name);
                }
                else if(option == 'P' || option == 'p')
                {
                    printf("Enter New Percentage : ");
                    scanf("%f", &temp->per);
                }

                printf("\nRecord Modified Successfully.\n");
                return;
            }
            temp = temp->next;
        }

        printf("\nRecord Not Found.\n");
    }

    else if(ch == 'N' || ch == 'n')
    {
        printf("Enter Name : ");
        scanf(" %[^\n]", name);

        printf("\nMatching Records\n");
        printf("--------------------------------------\n");
        printf("Roll\tName\t\tPercentage\n");
        printf("--------------------------------------\n");

        while(temp)
        {
            if(strcmp(temp->name, name) == 0)
                printf("%d\t%s\t\t%.2f\n", temp->roll, temp->name, temp->per);

            temp = temp->next;
        }

        printf("\nEnter Roll Number : ");
        scanf("%d", &roll);

        temp = head;

        while(temp)
        {
            if(temp->roll == roll)
            {
                printf("\nModify Field\n");
                printf("N/n : Name\n");
                printf("P/p : Percentage\n");

                printf("Enter Choice : ");
                scanf(" %c", &option);

                if(option == 'N' || option == 'n')
                {
                    printf("Enter New Name : ");
                    scanf(" %[^\n]", temp->name);
                }
                else if(option == 'P' || option == 'p')
                {
                    printf("Enter New Percentage : ");
                    scanf("%f", &temp->per);
                }

                printf("\nRecord Modified Successfully.\n");
                return;
            }

            temp = temp->next;
        }

        printf("\nRecord Not Found.\n");
    }

    else if(ch == 'P' || ch == 'p')
    {
        printf("Enter Percentage : ");
        scanf("%f", &per);

        printf("\nMatching Records\n");
        printf("--------------------------------------\n");
        printf("Roll\tName\t\tPercentage\n");
        printf("--------------------------------------\n");

        temp = head;

        while(temp)
        {
            if(temp->per == per)
                printf("%d\t%s\t\t%.2f\n", temp->roll, temp->name, temp->per);

            temp = temp->next;
        }

        printf("\nEnter Roll Number : ");
        scanf("%d", &roll);

        temp = head;

        while(temp)
        {
            if(temp->roll == roll)
            {
                printf("\nModify Field\n");
                printf("N/n : Name\n");
                printf("P/p : Percentage\n");

                printf("Enter Choice : ");
                scanf(" %c", &option);

                if(option == 'N' || option == 'n')
                {
                    printf("Enter New Name : ");
                    scanf(" %[^\n]", temp->name);
                }
                else if(option == 'P' || option == 'p')
                {
                    printf("Enter New Percentage : ");
                    scanf("%f", &temp->per);
                }

                printf("\nRecord Modified Successfully.\n");
                return;
            }

            temp = temp->next;
        }

        printf("\nRecord Not Found.\n");
    }

    else
    {
        printf("\nInvalid Choice.\n");
    }
}
