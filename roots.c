#include<stdio.h>
int root(double a,double b,double c)
{
	 double x1=(b*b)-(4*a*c);
	  //The value of x in real no will come only if x1 is positive //
	  	if(x1>0)
	  	{ 
	  		double sqrtt= sqrt(x1); 
	  	double upper = -b + sqrtt; 
	  	double upper_alt = -b - sqrtt;
	  	 double downn = 2*a; 
	  	 double ans_one = upper/downn; 
	  	 double ans_two = upper_alt/downn; 
	  	 printf("The roots of the quadratic equation is as follows\n"); 
	  	 printf("x=%lf\n",ans_one); 
	  	 printf("x=%lf\n",ans_two); 
	  	 }
	  	  else
	  	  { 
	  	  	printf("No real values."); 
	  	  	}
	  	  	 } 
	  	  	 //main function// 
	  	  	      void main()
	  	  	      { 
	  	  	      	double a; double b; double c; 
	  	  	      	printf("Enter the values of the quadratic equation:\n");
	  	  	      	 printf("[a]x^2+bx+c=0:"); 
	  	  	      	 scanf("%lf",&a);
	  	  	      	  printf("ax^2+[b]x+c=0:"); 
	  	  	      	  scanf("%lf",&b); 
	  	  	      	  printf("ax^2+bx+[c]=0:"); 
	  	  	      	  scanf("%lf",&c); 
	  	  	      	  root(a,b,c); 
	  	  	      	  }