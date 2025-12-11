#include<stdio.h>

int main () {
    float a,b,c;

    printf("Enter Three Side of Triangle: ");
    scanf("%f %f %f", &a,&b,&c);

    if ((a+b>c) && (a+c>b) && (b+c>a)) {

        if (a==b && b==c){
            printf("The triangle is Equilateral Triangle.\n");
        
        }
        else if (a==b || b==c || c==a) {
            printf("The triangle is Isoseles Triangle.\n" );

        }
        else {
            printf("The triangle is Scalar Triagle.\n");
        }
    }
    else {
        printf("The is not a trriangle ");
    }
    return 0;
}