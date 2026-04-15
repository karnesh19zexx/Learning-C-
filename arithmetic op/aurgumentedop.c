#include <stdio.h>

int main(){

    int x = 3;
    int y = 2;
    int z = 0;

    x = x+2;   //both does the same//
    x+=3;      //adds and updates the x's origin val//



    /*similarly
    
    x+=2;
    x-=3;
    x*=5;
    x/=2;
    
    */

    printf("%d", x);

    return 0;

}
