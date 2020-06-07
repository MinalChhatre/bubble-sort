#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],i,j,n,swaping,min;
	printf("\nenter the size of array");
	scanf("%d",&n);
	printf("\nenter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nelements before sorting :");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	//selection sort logic....
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		swaping=a[i];
		a[i]=a[min];
		a[min]=swaping;
	}
	printf("\nelements after selection sorting :");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
