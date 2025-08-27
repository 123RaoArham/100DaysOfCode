#include<stdio.h>
 int main(){
 int a,b;
 printf("Enter The First Number: ");
 scanf("%d",&a);
 printf("Enter The Second Number: ");
 scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("After Swapping The Numbers %d %d\n",a,b);
 return 0;
}