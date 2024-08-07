#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no.of destinations:");
	scanf("%d",&n);
	int a[n],i,j,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the time to reach each destination");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
			  temp=a[i];
			  a[i]=a[j];
			  a[j]=temp;				
			}
		}
	}
	printf("\nSorted times to reach destination:");
	for(i=0;i<n;i++)
	  printf("%d ",a[i]);
}

