#include<stdio.h>

int main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // declare array

    // Input elements
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Display odd elements
    printf("Even numbers in the array are: ");
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)  // check if number is odd
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}