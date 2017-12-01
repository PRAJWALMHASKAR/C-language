#include<stdio.h>
 void main()
 { 
 	int num_array[]={1,2,3,4,5,6,7,8,9}; int max=num_array[0]; int min=num_array[0]; int i=sizeof(num_array);int i_minus_one;
 	 while(i>0){i_minus_one=i-1;
 	  if(num_array[i]<num_array[i_minus_one])
 	  {
 	  	 max=num_array[i_minus_one]; 
 	  	 }
 	  	 i--; 
 	  	 } 
 	  	 i=sizeof(num_array); 
 	  	 while(i>0)
 	  	 {
 	  	 	i_minus_one=i-1; 
 	  	 if(num_array[i]>num_array[i_minus_one])
 	  	 { 
 	  	 	min=num_array[i_minus_one]; 
 	  	 	}
 	  	 	i--;
 	  	 	 }
 	  	 	 printf("The maximum is %d\n",max);
 	  	 	 printf("The minimum is %d",min); 
}