#include <stdio.h>

void insertionSort(short array[], short limit)
{
    short firstloop,temp,value,k;
    printf("\nEnter the values in the array below\n");
    for(firstloop=0; firstloop<limit; firstloop++)
    {
        scanf("%d", & array[firstloop]);
    }

    for(firstloop=1; firstloop<limit; firstloop++)
    {
        printf("Pass %d: ", firstloop);
        temp = array[firstloop];
        value = firstloop;

        while(value > 0 && temp < array[value-1])
        {
            array[value] = array[value-1];
            value--;
        }
        array[value] = temp;
        for(k=0; k<limit; k++)
        {
            printf("%d ", array[k]);
        }
        printf("\n");
    }
}

int main()

{
    short n,i;
    printf("Enter the limit of the array: ");
    scanf("%d", &n);
    short array[n];

    insertionSort(array,n);

    printf("\nYour final sorted array is below\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
}
