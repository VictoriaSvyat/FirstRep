#include<stdio.h>
void main()
{   
    double a, b; 
    char c;
    printf("Write 2 num:\n");
    scanf("%lf %lf", &a, &b);
    printf("+    -\n");
    scanf(" %c", &c);
    if (c=='+')
    {
        printf("Their sum:\n");
        printf("%lf\n", a + b);
    }  
    else
    {
        printf("Their dif:\n");
        printf("%lf\n", a - b);  
    }
    printf("Have a nice day:)\n");
}