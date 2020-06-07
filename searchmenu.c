#include<stdio.h>
#include<stdlib.h>
#define max 50
int main()
{
    int a[max],i,j,n,search,lowerbound,upperbound,mid,temp,flag=0,ch;
    do
    {
    		printf("enter the size of array");
        	scanf("%d",&n);
        	printf("\nenter the elements of array");
        	for(i=0;i<n;i++)
	        {
     		scanf("%d",&a[i]);
        	}
         	printf("\nsorting an array");
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1;j++)
	{
		if(a[j]>a[j+1])
		{
		   temp=a[j];
		   a[j]=a[j+1];
		   a[j+1]=temp;	
		}
	}
}
printf("\nsorted elements are :");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
	printf("\nenter the element to be searched : ");
	scanf("%d",&search);
    	printf("\npress 1 for linear search\npress 2 for binary search");
    	printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        	case 1:
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
	break;
	case 2:
		                       	//binary search logic...
     lowerbound=0;
	 upperbound=n-1;
	 while(lowerbound<=upperbound)
	 {
	 	mid=(lowerbound+upperbound)/2;
	 	if(search<a[mid])
	 	{
	 		upperbound=mid-1;
		 }
		 else if(search>a[mid])
		 {
		 	 lowerbound=mid+1;
		 }
		 else if(search==a[mid])
		 {
		 	printf("%d element found at %d location",search,mid+1);
		 	
		 	break;
		 }
	 }
	 break;
	 default:printf("Invaild Option.."); 
		}
		printf("\npress 1 to continue the process");
scanf("%d",&ch);
	}while(ch==1);
	return 0;
}
