#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i, sum, temp = 0;
    printf("Enter the no. of elements in an array(1-1000) :");
    scanf("%d",&n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Enter the elements of the array :");
    
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    for(i=0; i<n; i++)
    {
        sum = arr[i] + temp;
        temp = sum;
    }

    printf("%d",sum);
    free(arr);
    return 0;
}
