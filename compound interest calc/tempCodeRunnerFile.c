#include <stdio.h>
#include <math.h>

int main(){

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timecompounded = 0;
    double total = 0.0;

    printf("Compound interest Calculator\n");
    
    printf("Ensure the principal(P): ");
    scanf("%lf",&principal);

    printf("Enter the interest rate(R): ");
    scanf("%lf",&rate);
    rate = rate / 100;

    printf("Enter the number of years(T): ");
    scanf("%d",&years);

    printf("Enter number of times compounded per year(n): ");
    scanf("%d",&timecompounded);





    return 0;
}