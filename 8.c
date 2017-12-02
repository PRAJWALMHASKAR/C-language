#include<stdio.h>
//This is the function which compares the 2 numbers
void compare(double a,double b){

    if(a>b){
        printf("%lf is bigger than %lf",a,b);
    }
    else if(b>a){
        printf("%lf is bigger than %lf",b,a);
    }
    else if(a==b){
        printf("Both are equal nos");
    }
    else{
        printf("Please enter a valid no");
    }

    }
//this is the main function
void main(){
    double first_no;
    double second_no;
    printf("Please enter first number:");
    scanf("%lf",&first_no);
    printf("Please enter second number:");
    scanf("%lf",&second_no);
    compare(first_no,second_no);
}
