#include<stdio.h>
//this is the function for adding two nos
void add(double a,double b){
    double c=a+b;
    printf("The addition of the two nos is %lf\n",c);
    }
//this is the function for subtracting two nos
void subtract(double a,double b){
    double c=a-b;
    printf("The subtraction of the two no is %lf\n",c);
    }
//this is the function for multiplying two nos
void multi(double a,double b){
    double c=a*b;
    printf("The product of the two no is %lf\n",c);
    }
//this is the function for dividing two nos
void div(double a,double b){
    double c=a/b;
    printf("The division of the two no is %lf\n",c);
    }


void main(){
//Declaration of two variables
    double first_no;
    double second_no;
    printf("Enter the first no:");
    scanf("%lf",&first_no);
    printf("Enter the second no:");
    scanf("%lf",&second_no);
//The code of the program is the soul of the program
    add(first_no,second_no);
    subtract(first_no,second_no);
    multi(first_no,second_no);
    div(first_no,second_no);
}
