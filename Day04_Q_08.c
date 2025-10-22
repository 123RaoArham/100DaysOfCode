#include<stdio.h>
      int main(){
        int a;
        int sum=0;
        printf("Enter The value Of n: ");
        scanf("%d",&a);
        int i=1;
        while (i<=a){
            sum = sum+i;
            i++;
        }
        printf("The sum Of %d natural numbers is: %d\n",a,sum);

        }
        

    
