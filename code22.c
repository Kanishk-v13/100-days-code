#include<stdio.h>

int main() {
    float costprice, sellingprice, profitorloss, percentage;

    printf("Enter Cost Price:  ");
    scanf("%f", &costprice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingprice);

    if(costprice<sellingprice) {
        profitorloss = sellingprice-costprice;
        percentage = (profitorloss / costprice) * 100;
        printf("Profit = %.2f\n", profitorloss);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }

   else if(costprice>sellingprice) {
        profitorloss = costprice-sellingprice;
        percentage = (profitorloss / costprice) * 100;
        printf("Loss = %.2f\n", profitorloss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else {
        printf("No Profit, No Loss\n");
    }
    return 0;

}