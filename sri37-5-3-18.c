#include <stdio.h>
int main() 
{
int x,y;
printf("\n enter two numbers of swaing:");
scanf("%d %d",&x,&y);
printf("\n before swapping:");
printf("\nx=%d",x);
printf("\ny=%d",y);
x=x+y;
y=x-y;
x=x-y;
printf("\n after swapping:");
printf("\nx=%d",x);
printf("\ny=%d",y);
return 0;
}
