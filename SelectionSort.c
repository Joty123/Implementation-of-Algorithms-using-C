#include <stdio.h>

void Selectionsort(int A[], int num)
{
    int i,j,iMin,temp,k;
    printf("\nEnter the values in the array\n");
    for(k=0; k<num; k++)
    {
        scanf("%d", &A[k]);
    }

    for(i=0; i<num; i++)
    {
        iMin = i;
        {
            for(j= i+1; j<num; j++)
            {
                if (A[j]< A [iMin])
                {
                    iMin = j;
                }
            }
            temp = A[i];
            A[i] = A[iMin];
            A[iMin] = temp;
        }
    }
}

int main()
{
    int n;
    printf("Please enter the limit of the array: ");
    scanf("%d", &n);
    int a[n],i;
    Selectionsort(a,n);

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}

