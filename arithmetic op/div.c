#include <stdio.h>

int main(){

    int x = 2;
    float y = 3;
    float z = 0;  /* since z is a storing var it's 
                    data type should be specified
                    correctly */

    z = x/y;

    printf("%f", z);  // here too

    return 0;

}

/* Note: if you are dividing two integers you can't 
retain the precise float values. so you should change
the datatype of input - here: y is changed to float
cuz it gave 0.000000 as output when the y was int and
0.666667 when it is changed to float*/