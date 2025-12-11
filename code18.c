#include<stdio.h>

int main () {
    float percentage;


 printf("Enter Your percentage: ");
 scanf("%f", &percentage);
 
 if (percentage >= 90) {
    printf ("Grades: A\n");
 }
 else if (percentage >=80) {
    printf("Grades: B\n");
 }
 else if (percentage >= 70) {
    printf("Grades: C\n");
 }
 else if (percentage >= 60) {
    printf("Grades: D\n");
 }
 else {
    printf("Grades: F\n");
 }
 return 0;
 
}