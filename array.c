#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,a[100],count=0;
    printf("Enter the elements, enter 70 to stop: ");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
        if(a[i]==70)
            break;
        count++;
    }
    printf("The size of the array is: %d", count);
    return 0;
}