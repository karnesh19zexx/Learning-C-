#include <stdio.h>
#include <string.h>

int main(){

    char item[50] = "";
    float price = 0.0f; //f can be omited for double. f tells the devs that tis is a float
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy :");
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1]= '\0'; 

    printf("what is the price for each:");
    scanf("%f",&price);

    printf("How many would you like to buy:");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("you have bought %d %s/s \n",quantity,item);
    printf("your total: %c %.2f",currency,total);

    return 0;
}