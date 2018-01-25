#include <stdio.h>


void bubblesort(int A[] , int number)
{
    int i,k, flag,temp=0;
    printf("\nPlease enter the values in the array to sort\n");
    for(i=0; i<number; i++)
    {
        scanf("%d", & A[i]);
    }

    for(k=0; k<number; k++)
    {
        flag =0;
        for(i=0; i<number-1-k; i++)
        {
            if (A[i]> A[i+1])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                flag=1;
            }
        }
        if (flag==0)
        {
            break;
        }
    }
}


int main()
{
    int n,i;
    printf("Please enter the limit of the array: ");
    scanf("%d", & n);
    int a[n];
    bubblesort(a,n);

    printf("\nYour sorted array is below\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}
