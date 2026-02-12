#include <stdio.h>
#include <math.h> 
int main()
{
    double x, y;
    printf("Формула:\ny=1/(3+2cosx) \n");
    printf("Введіть x:");
    scanf("%lf", &x);
    y=1/(3+2*cos(x));
    printf("Розвʼязок: %lf\n", y);
    return 0;
}
