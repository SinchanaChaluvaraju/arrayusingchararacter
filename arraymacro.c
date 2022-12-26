#include<stdio.h>
#define N 5
int main()
{
    int arr[N], i;
    for(i=0; i<N; i++)
    {
        printf("Enter the input values: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nDisplay the array values:\n");
    for(i=0; i<N; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;

}