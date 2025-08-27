#include<stdio.h>
    int main(){
        int temp_feh,temp_cel;
        printf("Enter the temp is cel: ");
        scanf("%d", &temp_cel);
        temp_feh=(9/5*temp_cel)+32;
        printf("Fahrenheit= %d",temp_feh);
        return 0;


    }