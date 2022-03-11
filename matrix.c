#include <stdio.h>

int main(){

    int i, j, sum=0, sumd1=0, sumd2=0, arr[4][4];

    printf("Enter the elements of the array: ");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The matrix entered is: \n");
    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            sum = sum + arr[i][j];
        }
    }
    printf("THe sum of all elements of the matirx is: %d\n", sum);

    for(i=0; i<4; i++){
        sumd1 = sumd1 + arr[i][i];
    }
    printf("The sum of primary diagonal of the matrix is: %d\n", sumd1);

    for(i=0; i<4 ;i++){
        sumd2 = sumd2 + arr[i][4-i-1];
    }
    printf("The sum of secondary diagonal is: %d\n", sumd2);

    return 0;
}