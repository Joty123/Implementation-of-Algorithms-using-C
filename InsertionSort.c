#include <stdio.h>

void InsertionSort(short A[], short number)
{
    short i,hole,value;
    printf("\nPlease enter the values of the array below\n");
    for(i=0; i<number; i++)
    {
        scanf("%d", & A[i]);
    }

    for(i=0; i<number; i++)
    {
        value = A[i];
        hole = i;

        while(hole>0 && A[hole-1]>value)
        {
            A[hole] = A[hole-1];
            hole = hole -1;
        }
        A[hole] = value;
    }
}


int main()
{
    printf("Enter the limit of the array: ");
    short n,i;
    scanf("%d", & n);
    short array[n];
    InsertionSort(array,n);
    for(i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }

}
