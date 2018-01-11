#include <stdio.h>

int main()
{
    int a[50],b[50],c[50];
    int n,i,j=0,k=0,x,y;

    printf("Please enter your array limit: ");
    scanf("%d", & n);
    printf("\nPlease enter your numbers in array\n");
    for(i=0 ; i<n; i++)
    {
        scanf("%d", & a[i]);
    }

    for(i=0; i<n; i++)
    {
        if (a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]= a[i];
            k++;
        }
    }

    printf("\nThe even numbers are\n");
    for(x=0; x<j; x++)
    {
        printf("%d  ", b[x]);
    }

    printf("\nThe odd numbers are\n");
    for(y=0; y<k; y++)
    {
        printf("%d  ", c[y]);
    }
}
