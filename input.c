#include <stdio.h>
int main()
{
    int n1;
    double n2;
    char a, b[30];

    printf("Enter an integer: ");
    scanf("%d", &n1);  

    printf("Enter a decimal: ");
    scanf("%lf", &n2);

    printf("Enter char: \n");
    scanf("%c", &a);

    printf("Enter String: \n");
    scanf("%s", b);

    printf("Integer Entered = %d",n1);
    printf("Double Entered = %lf\n", n2);
    printf("Char Entered: %c\n", a);
    printf("String entered: %s\n", b);
    
    
    return 0;
}