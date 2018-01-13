#include <stdio.h>

int main()
{
    int a[50], b[50], c[100];
    int i,j=0,k=0;
    int m=0,n=0;

    printf("Please enter the limit of first array: ");
    scanf("%d", & m);
    printf("\nPlease enter the values in first array below\n");
    for(i=0; i<m; i++)
    {
        scanf("%d", & a[i]);
    }

    printf("\nPlease enter the limit of second array: ");
    scanf("%d", & n);
    printf("\nPlease enter the values in second array below\n");
    for(j=0; j<n; j++)
    {
        scanf("%d", & b[j]);
    }
    i=0,j=0,k=0;

  while ((i<m) && (j<m))
  {
  	if (a[i]<=b[j])
  	{
  		c[k] = a[i];
  		i++;
  		k++;
	}
	else
	{
		c[k] = b[j];
		j++;
		k++;
	}
  }

    while( i<m )
    {
        c[k]=b[j];
        j++;
        k++;
    }
    while (j<n)
    {
        c[k]= a[i];
        k++;
        i++;
    }

    printf("\n\nYour sorted array is below\n");
    for(i=0; i< m+n; i++)
    {
        printf("%d ", c[i]);
    }




}
