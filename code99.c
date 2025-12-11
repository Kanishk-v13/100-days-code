#include <stdio.h>

int main() {
    char input[20];
    char day[3], year[5];

    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", input);


    day[0] = input[0];
    day[1] = input[1];
    day[2] = '\0';

    year[0] = input[6];
    year[1] = input[7];
    year[2] = input[8];
    year[3] = input[9];
    year[4] = '\0';

   
    printf("%s-Apr-%s", day, year);

    return 0;
}
