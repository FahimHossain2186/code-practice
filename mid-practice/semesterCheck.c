/*Write a C program that reads the semester no. of a student
and print a comment about student based on the table below. Use switch case.
Semester No.	Comment
0	Invalid Semester
1-3	Freshman
4-6	Sophomore
7-9	Junior
10-12	Senior
>12	You must graduate soon
*/

#include <stdio.h>

int main(){
    
    int semesterNo;

    printf("The semester no. of the student:  ");
    scanf("%d", &semesterNo);

    switch (semesterNo)
    {
        case 0:                     printf("Invalid Semester\n");       break;
        case 1: case 2: case 3:     printf("Freshman\n");               break;
        case 4: case 5: case 6:     printf("Sophomore\n");              break;
        case 7: case 8: case 9:     printf("Junior\n");                 break;
        case 10: case 11: case 12:  printf("Senior\n");                 break;
        default:                    printf("You must graduate soon\n"); break;
    }

    return 0;
}