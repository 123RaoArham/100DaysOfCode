#include<stdio.h>
 int main (){
    int sec ;
    printf("Enter: ");
    scanf("%d,&sec");
    int hours = sec/3600;
    int minutes = (sec%3600)/60;
    int seconds = sec%60;
    printf("%d:%d:%d", hours,minutes,seconds);
    return 0;

 }
