#include<stdio.h>
#include<stdlib.h>
#define max 50
int main()
{
	int a[max],i,j,n,search,flag=0;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("\nenter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the element to be searched : ");
	scanf("%d",&search);
	//sequential search...
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n%d element found at %dth position",search,(i+1));
	}
	else
	{
		printf("\nelement not found!!!");
	}
	return 0;
}
