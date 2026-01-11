//define a structure for students
#include<stdio.h>
#include<string.h>
struct Student{
    char name[100];
    int roll_no;
    float cgpa;
};
int main(){
    struct Student S1;
    strcpy(S1.name,"Sagarika");
    S1.roll_no=23051292;
    S1.cgpa=8.46;
    printf("Student Name: %s\n", S1.name);
    printf("Student Roll No.: %d\n",S1.roll_no);
    printf("Student CGPA: %f\n",S1.cgpa);
    return 0;
}