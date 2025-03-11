/*Write a program that demonstrates the use of a nested structure to store and display information about a student, 
including their name, roll number, and address (with fields for house number, city, and state).*/

#include<stdio.h>

typedef struct {
    
    int houseNumber;
    char city[20];
    char state[20];

}Address;

typedef struct {

    char name[30];
    int roll;
    Address address;

}Student;

int main(){

    Student student1;

    printf("Enter Student Name:\t");
    scanf("%[^\n]", student1.name);
    printf("Enter roll number:\t");
    scanf("%d", &student1.roll);
    
    printf("Enter the Address:\n");
    printf("House no:\t\t");
    scanf("%d", &student1.address.houseNumber);
    printf("City:\t\t\t");
    gets(student1.address.city);
    printf("\nState:\t\t\t");
    gets(student1.address.state);

    return 0;
}