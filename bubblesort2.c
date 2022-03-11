#include <stdio.h>

void bubbleSort(int arr[], int num){

    int x, y, temp;   

    for(x = 0; x < num - 1; x++){
        for(y = 0; y < num - x - 1; y++){    
            if(arr[y] > arr[y + 1]){
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
    }
}

int main(){

    int arr[50], n, x;  

    printf("Enter number of elements: ");
    scanf("%d", &n);    

    printf("Enter the value of elements: ");
    for(x = 0; x < n; x++){
        scanf("%d", &arr[x]);
    }   

    bubbleSort(arr, n);

    printf("Bubble sorted array is: ");    

    for(x = 0; x < n; x++){
        printf("%d  ", arr[x]);
    }   

    return 0;

}