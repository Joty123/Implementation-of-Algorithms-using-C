#include <stdio.h>

int main()
{
    int array1[50], array2[50], array3[100];
    int i,j=0,m=0,n=0;

    printf("Please enter your array limit: ");
    scanf("%d", & m);
    printf("Please enter values of array below\n");
    for(i=0; i<m; i++)
    {
        scanf("%d", & array1[i]);
    }

    printf("Please enter your second array limit: ");
    scanf("%d", & n);
    printf("Please enter values of second array below\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", & array2[i]);
    }

    for(i=0; i<m; i++)
    {
        array3[i]= array1[i];
    }
    for(i=m; i<(m+n); i++)
    {
        array3[i]= array2[j];
        j++;
    }

    printf("\n\nYour updated array is below\n");
    for(i=0; i<(m+n); i++)
    {
        printf("%d ", array3[i]);
    }

}
