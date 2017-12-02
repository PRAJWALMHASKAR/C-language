#include<stdio.h>
//this is the function where the numbers are compared
void compare(double first_no,double second_no,double third_no){
    if(first_no>second_no&&first_no>third_no){
        printf("The greatest no is %lf",first_no);
    }
    else if(second_no>first_no&&second_no>third_no){
        printf("The greatest no is %lf",second_no);
    }
    else if(third_no>first_no&&third_no>second_no){
        printf("The greatest no is %lf",third_no);
    }
    else if(first_no==second_no && second_no==third_no){
        printf("All numbers are equal");
    }
    }
//this is the main function
void main(){
    double a;
    double b;
    double c;
    printf("Enter the first no:");
    scanf("%lf",&a);
    printf("Enter the second no:");
    scanf("%lf",&b);
    printf("Enter the third no:");
    scanf("%lf",&c);
    compare(a,b,c);
}
