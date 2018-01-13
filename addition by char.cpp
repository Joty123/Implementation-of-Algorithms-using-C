#include<stdio.h>
int main()
{
	char a[4]={'+','-','*','/'};
	int b[2],i,sum,sub,mul,div;
	printf("Enter your number:\n");
	for(i=0;i<2;i++)
	{
		scanf("%d",&b[i]);
	}
	sum=b[0]+b[1];
	printf("\n%d %c %d = %d",b[0],a[0],b[1],sum);
	
	sub=b[0]-b[1];
	printf("\n%d %c %d = %d",b[0],a[1],b[1],sub);
	
	mul=b[0]*b[1];
	printf("\n%d %c %d = %d",b[0],a[2],b[1],mul);
	
	div=b[0]/b[1];
	printf("\n%d %c %d = %d",b[0],a[3],b[1],div);
	
}
