#include <stdio.h>
#include <math.h> 
int main()
{
    double x, y;
    printf("Формула:\ny=4,95x^2+4+x^(-2)-tan⁡((3,5+x)/5)+sin⁡3x-cos⁡√(x^2+1) \n");
    printf("Введіть x:");
    scanf("%lf", &x);
    y=4.95*pow(x,2)+4+pow(x,-2)-tan((3.5+x)/5)+sin(3*x)-cos(sqrt(pow(x,2)+1));
    printf("Розвʼязок: %lf\n", y);
    return 0;
}
