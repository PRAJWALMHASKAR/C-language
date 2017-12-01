#include<stdio.h>

main()
{

int po,quo,vin,no;
printf("\n Specify the number of rows:");
scanf("%d",&no);
for(po=1;po<=no;po++)
{
vin=po;
for(quo=1;quo<=no;quo++)
{
printf("\t%d",vin);
if(vin==no)
vin=1;

else
vin++;
}
printf("\n");
}
return 0;
}

