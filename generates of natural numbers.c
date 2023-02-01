#include<stdio.h>
int main(){
int a=1;
int sum=0;
int n;
printf("Enter the max num value:");
scanf("%d",&n);
printf("odd number in the list:");
while(a<=n){
    printf("%d\t",a);
    sum=sum+a;
    a=a+2;
}
printf("sum of all odd numbers:");


}
