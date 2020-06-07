#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,size,new_size,size1,ch,x;
	int *ptr;
	printf("enter the size of array:");
	scanf("%d",&size);
	ptr=(int*)calloc(size,sizeof(size));
	printf("\nEnter the elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("\nYour elements are:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	menu:
		printf("\nenter how many no. to reallocate:");
		scanf("%d",&new_size);
	    printf("Enter the new elements ... [press 0 to get elements in reverse direction]\n");
	    	ptr=(int*)realloc(ptr,new_size);
	    		ptr=(int*)calloc(size,sizeof(size));
	    	size1=size;
    		size=size+new_size;
    		i=size1;
	    do
	    {
	    	
			scanf("%d",(ptr));	
		}while(*ptr!=0);
		printf("\nYour new elements in reverse direction:\n");
		for(i=size-1;i>=0;i--)
		{
			printf("%d\t",*(ptr+i));
		}
	printf("\npress 1 to reallocate more memory or press 0 to continue the process: ");
	scanf("%d",&ch);
    if(ch==1)
    {
    	goto menu;
	}
	else if(ch==0)
	{
		printf("\npress 1 for greatest no.\npress 2 for smallest no.\npress 3 for average no.\npress 4 for above avg no.\npress 5 for prime no.\npress 6 for perfect no.\npress 7 for even no.\npress 8 for odd no.\npress 9 for amstrong no.");
	}
    return 0;
}
