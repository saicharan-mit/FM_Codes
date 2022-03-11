#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1,n2, a;
    double angle,x;
    
    printf("User Input          Operations  \n");
    printf("\n   1               Addition \n");
    printf("\n   2              Subtraction \n");
    printf("\n   3             Multiplication \n");
    printf("\n   4               Division \n");
    printf("\n   5              Exponential \n");
    printf("\n   6                 Sine \n");
    printf("\n   7                Cosine \n");
    printf("\n   8                Tangent \n");
    printf("\n   9               Cosecant \n");
    printf("\n   10               Secant \n");
    printf("\n   11              Cotangent \n");


    printf("Choose an operation: ");
    scanf(" %d",&a);
    
    switch(a){
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &n1,&n2);
            printf("The Sum of 2 numbers is: %d", n1+n2);
            break;
        
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &n1,&n2);
            printf("The Difference of 2 numbers is: %d", n1-n2);
            break;
        
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &n1,&n2);
            printf("The Multiplication of 2 numbers is: %d", n1*n2);
            break;
        
        case 4:
            printf("Enter 2 numbers: ");
            scanf("%d %d", &n1,&n2);
            printf("The Division of 2 numbers is: %d", n1/n2);
            break;
            
        case 5:
            printf("Enter a number: ");
            scanf("%lf", &x);
            printf("The Exponential of %lf is: %lf", x, exp(x));
            break;

            
        case 6: 
            printf("Enter the angle in radians: ");
            scanf("%lf", &angle);
            printf("The Sine of the angle %lf is %lf", angle, sin(angle)); 
            break;
        
        case 7: 
            printf("Enter the angle in radians: ");
            scanf("%lf", &angle);
            printf("The Cosine of the angle %lf is %lf", angle, cos(angle)); 
            break;
        
        case 8: 
            printf("Enter the angle in radians: ");
            scanf("%lf", &angle);
            printf("The Tangent of the angle %lf is %lf", angle, tan(angle)); 
            break;
            
        case 9: 
            printf("Enter the angle in radians: ");
            scanf("%lf", &angle);
            printf("The Cosecant of the angle %lf is %lf", angle, pow(sin(angle),-1)); 
            break;
        
        case 10: 
            printf("Enter the angle in radians: ");
            scanf("%lf", &angle);
            printf("The Secant of the angle %lf is %lf", angle, pow(cos(angle),-1)); 
            break;
        
        case 11: 
            printf("Enter the angle in radians: ");
            scanf("%lf", &angle);
            printf("The Cotangent of the angle %lf is %lf", angle, pow(tan(angle),-1));
            break;

        default:
            printf("Choose a valid operation");
            break;
        }
    
    return 0;
}