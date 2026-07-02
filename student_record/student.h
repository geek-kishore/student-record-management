#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    int roll;
    char name[30];
    float per;
    struct student *next;

}STUD;

extern STUD *head;

void stud_add();
void stud_del();
void stud_show();
void stud_mod();
void stud_save();
void stud_load();
void stud_sort();

#endif
