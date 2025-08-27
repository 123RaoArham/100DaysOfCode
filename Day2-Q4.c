#include <stdio.h>

int main() {
    double radius;
    double pi = 3.141592653589793;
    scanf("%lf",&radius);
    printf("Area=%.2lf, Circumferenece=%.2lf\n",pi*radius*radius,2*pi*radius);
}