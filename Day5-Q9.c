#include<stdio.h>
#include<math.h>
      int main(){
        float p,r,t;
        float simple_int, compound_int;
        scanf("%f %f %f", &p,&r,&t);
        simple_int = (p*r*t)/100;
        compound_int = (p*pow((1+r/100),t))-p;
        printf("the Simple intrest = %.2f and compound intrest = %.2f", simple_int,compound_int);
        return 0;
        
      }