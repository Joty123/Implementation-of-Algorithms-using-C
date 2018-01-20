#include <stdio.h>

void main()
{
    int a[100], n,i,temp, swap=0;

    printf("Please enter the limit of your array: ");
    scanf("%d", & n);
    printf("Enter the values in the array to sort\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        temp=0;
        while(temp<+n-1-i)
        {
            if (a[temp] > a[temp+1])
            {
                swap= a[temp];
                a[temp]= a[temp+1];
                a[temp+1]= swap;
            }
            temp++;
        }
    }

    printf("\n\nYour sorted array is below\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}
