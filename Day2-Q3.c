#include <stdio.h>

int main() {
    int length,width;
    scanf("%d %d",&length,&width);
    printf("Area=%d, Perimeter=%d",length*width,2*(length+width));
}