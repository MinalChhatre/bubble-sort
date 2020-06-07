#include<stdio.h>
#include<stdlib.h>
#define max 50
// Data Structure Sorting Menu...
int main()
{
	int a[max],i,j,n,temp,swap,swaping,min,ch;
	printf("\nenter the size of array");
	scanf("%d",&n);
	printf("\nenter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\narray elements before sorting :");
    for(i=0;i<n;i++)
    {
    	printf("%d\t",a[i]);
	}
	do
	{
	printf("\npress 1 for bubble sort.\npress 2 for selection sort.\npress 3 for insertion sort.\npress 4 for shell sort.\npress 5 for merge sort.\npress 6 for quick sort.\npress 7 for heap sort.\npress 8 for radix sort.");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1:
    		//Bubble sort...
    		for(i=0;i<n-1;i++)
    		{
    		    for(j=0;j<n-1-i;j++)
    		    {
    		    	if(a[j]>a[j+1])
    		    	{
    		    		swap=a[j];
    		    		a[j]=a[j+1];
    		    		a[j+1]=swap;
					}
				}
			}
	        printf("\nbubble sorting in ascending order :");
            for(i=0;i<n;i++)
            {
            	printf("\t%d",a[i]);
 	        }
 	        printf("\n");
	        for(i=0;i<n-1;i++)
        	{
	    	    for(j=0;j<n-i-1;j++)
		        {
        			if(a[j]<a[j+1])
		        	{
			    	swap=a[j+1];
			    	a[j+1]=a[j];
				    a[j]=swap;
			        }
			    }
		    }
		   	printf("\nbubble sorting in descending order :");
            for(i=0;i<n;i++)
            {
               	printf("\t%d",a[i]);
          	}
           	printf("\n");
          	break;
        case 2: 
            //Selection sort...
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
	        printf("\n");
		     break;
		case 3:
			//Insertion sort...
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
         	printf("\n");
		     break;
		    
		default:printf("Invaild Option.."); 
    }
            printf("\npress 1 to continue the process");
            scanf("%d",&ch);
    }while(ch==1);	
	return 0;
}
