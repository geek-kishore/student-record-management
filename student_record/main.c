#include<stdio.h>
#include<stdlib.h>
#include"student.h"

STUD *head=NULL;

int main()
{
    char ch;

    stud_load();

    while(1)
    {
        printf("\n**** STUDENT RECORD MENU ****\n");

        printf("A/a : Add New Record\n");
        printf("D/d : Delete Record\n");
        printf("S/s : Show Records\n");
        printf("M/m : Modify Record\n");
        printf("V/v : Save\n");
        printf("T/t : Sort\n");
        printf("E/e : Exit\n");

        printf("\nEnter Choice : ");
        scanf(" %c",&ch);

        switch(ch)
        {
            case 'A':
            case 'a':
                stud_add();
                break;

            case 'D':
            case 'd':
                stud_del();
                break;

            case 'S':
            case 's':
                stud_show();
                break;

            case 'M':
            case 'm':
                stud_mod();
                break;

            case 'V':
            case 'v':
                stud_save();
                break;

            case 'T':
            case 't':
                stud_sort();
                break;

            case 'E':
            case 'e':
            {
                char c;

                printf("\nS/s : Save & Exit\n");
                printf("E/e : Exit without Save\n");

                scanf(" %c",&c);

                if(c=='S'||c=='s')
                    stud_save();

                exit(0);
            }
        }
    }
}
