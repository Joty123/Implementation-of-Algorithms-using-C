#include <stdio.h>

int main()
{
    short n,i,j,ptr,temp;
    short a[100],flag;

    printf("Enter the limit of the array: ");
    scanf("%d", &n);
    printf("\nEnter the values of the array below\n");

    for(i=0; i<n; i++)
    {
        scanf("%d", & a[i]);
    }

    for(j=1; j<n ; j++)
    {
        ptr =0;
        printf("Step %i:\n", j);
        while (ptr<n-j)
        {
            if (a[ptr]>a[ptr+1])
            {
                temp = a[ptr];
                a[ptr] = a[ptr+1];
                a[ptr+1] = temp;
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            printf("\t");
            for(i=0; i<n; i++)
            {
                printf("%d ", a[i]);
            }
              if(a[ptr]>a[ptr+1])
                {
                    printf("\t%d and %d is swapped", a[ptr+1], a[ptr]);
                }
                else
                {
                    printf("\tNo swap");
                }
            ptr++;
            printf("\n");
        }
    }

    printf("\n\nYour sorted array is below\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}

