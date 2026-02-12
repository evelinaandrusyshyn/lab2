#include <stdio.h>
int main()
{
    int a=197; 
    char b=82;
    long c=178, x, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
    int e=45; 
    x=(~a++^-b--)>(-c&(sizeof(unsigned long)&&~e));
    printf("Результат однієї дії: %ld\n", x);
    s1=a++;
    s2=~s1;
    s3=b--;
    s4=-s3;
    s5=s2^s4;
    s6=~e;
    s7=sizeof(unsigned long)&&s6;
    s8=-c;
    s9=s8&s7;
    s10=s5>s9;
    printf("Покроково: s1=%ld, s2=%ld, s3=%ld, s4=%ld, s5=%ld, s6=%ld, s7=%ld, s8=%ld, s9=%ld, s10=%ld\n", s1, s2, s3, s4, s5, s6, s7, s8, s9, s10);
    printf("Результат покроково: %ld\n", s10);
    return 0;
}
