#include <stdio.h>

int main()
{
    int array[100];                                                       // defining array t
    int i,n,searchnumber;
    char dataf= 'F', datat= 'T';                                             // defining False and true for later use
    char midlessf= 'F', midlesst= 'T';
    char midgreatf= 'F', midgreatt= 'T';
    printf("How many number you want to add in the array?\n");
    scanf("%d", & n);                                                         // getting limit of array number from the user
    printf("Please enter the values of your array below\n");
    for(i=0; i<n; i++)                                                      // loop used for getting the values in the array from the user
    {
        scanf("%d", & array[i]);
    }
    printf("\n\nValue[Index]\n\n");
    for(i=0; i<n; i++)
    {
        printf("%d[%d]  ", array[i],i);                      // used for ease the value and the index of the values
    }

    printf("\n\nPlease enter the number you want to search from the array: ");
    scanf("%d", & searchnumber);                                                 // getting the number that the user want to search

    printf("\nFirst\tLast\tMid\tValue\tData\tItem>Mid\tItem<Mid\n");  // used for signboard of trace table
           printf("================================================================");

    int lowerbound=0, upperbound= n-1, middle = (lowerbound+upperbound)/2, found=0;       //binary search starts from here
    while(lowerbound<=upperbound)                                                       // while loop works if the lower value of the array is less than or equal to the last value of the array
    {
        if (array[middle] == searchnumber)                                              // check if the searching number is equal to the array numbers that are in the array
        {
            printf("\n|%d\t|%d\t|%d\t|%d\t|%c\t|%c\t\t|%c\n", lowerbound, upperbound, middle, array[middle], datat, midlessf,midgreatf);       // if the number is found then lower bound , upper bound , middle index, middle index value, data found
            printf("=================================================================");
                                                                                                                                         // or not, whether the searching number is greater than mid or not will be printed
            printf("\n\nYour searching number %d is found at %d index %d position\n\n\n", searchnumber, middle, middle+1);            // searching number and its position will be printed here.
            found=1;                                                                                             // found value will be incremented
            break;                                                                                              // break the loop if the number is found
        }
        else if (array[middle]<searchnumber)                                                      // if the middle is less than searching number than this statement will work
        {
            printf("\n|%d\t|%d\t|%d\t|%d\t|%c\t|%c\t\t|%c\n", lowerbound, upperbound, middle, array[middle],dataf, midlesst,midgreatf);                         // print the lower bound , upper bound etc than is required.
            printf("-----------------------------------------------------------------");
            lowerbound= middle+1;                                                                                          // the lower bound will be middle + 1
            middle=(lowerbound+upperbound)/2;                                                               // next middle will be calculated
        }
        else
        {                                                                                                          // if the middle is greater than the searching number then this loop will execute
            printf("\n|%d\t|%d\t|%d\t|%d\t|%c\t|%c\t\t|%c\n", lowerbound, upperbound, middle, array[middle], dataf, midlessf,midgreatt);        // printing the stuff
            printf("-----------------------------------------------------------------");

            upperbound= middle -1;                                                                                                   // upper bound will be middle - 1
            middle= (lowerbound+upperbound)/2;                                                                                  // again next middle will be calculated
        }
    }

    if (found==0)                                                                                             // if the searching number is not found then this statement will execute
    {
        printf("\n\nSorry :( your searching number %d is not found in the array\n\n\n", searchnumber);
    }
}
