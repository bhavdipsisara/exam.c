#include <stdio.h>

void printOddElements(int arr[], int size)

{
    printf("Odd elements in the array: ");
    int i;
    for (i = 0; i < size; i++) 
	{
        if (arr[i] % 2 != 0) 
		{
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printOddElements(arr, size);

    return 0;
}