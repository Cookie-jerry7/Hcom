#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for(int j=0;j<num/2;j++)
    {
        int temp = arr[j];
        arr[j] = arr[num-j-1];
        arr[num-j-1] = temp;
        
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}