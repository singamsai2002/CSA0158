#include<stdio.h>

int main()
{
int n,i,sum=0;
printf("Enter the value of n:");
scanf("%d",&n);
printf(" The generation of n numbers are: \n");
for(i=1;i<=n;i++)
{
printf("\t %d",i);
sum+=i;
}
printf("\n\nSum of first n natural numbers is:%d",sum);

return 0;
}

