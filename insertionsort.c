#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10];
	int i,j,temp,n;
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
	//logic for insertion sort ...
	for(i=1;i<n;i++)
	{
	   temp=a[i];
	   j=i-1;
	   while(j>=0&&a[j]>temp)
	   {
	       a[j+1]=a[j] ;
		   j=j-1; 	  
	   }	
	   a[j+1]=temp; 
	}
	printf("\nelements after insertion sorting :");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
