#include <stdio.h>
#include <string.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";
    char fname[50] = "";

    printf("Enter your age:");
    scanf("%d", &age);

    printf("Enter your gpa:");
    scanf("%f", &gpa);

    printf("Enter your grade:");
    scanf(" %c", &grade);

    printf("Enter your name:");
    scanf("%s", &name);

    getchar(); //fixes newline issue
    printf("Enter your full name:");
    fgets(fname,sizeof(fname),stdin); // fixes reading whitespace
    fname[strlen(fname) - 1] = '\0';

    printf("%s\n",fname);
    printf("%d\n",age);
    printf("%.2f\n",gpa);
    printf("%c\n",grade);
    printf("%s\n",name);
    

    return 0;
}