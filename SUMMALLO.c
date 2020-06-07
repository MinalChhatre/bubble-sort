#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *n,x,sum=0,i,ecnt=0,ocnt=0;
	printf("Enter the numbers ...(press 0 to finish)\n\n");
	do{
	n=(int*)malloc(sizeof(int));
	scanf("%d",n);
	sum=sum+*n;
	if((*n)%2==0)
	{
		
		ecnt++;
	    
	}
	else
	{
		ocnt++;
	}
	x=*n;
	free(n);
	}while(x!=0);
	printf("------------------------------------------\n\n");
	printf("sum of numbers is : %d ",sum);
	printf("\n\n------------------------------------------\n\n");
	printf("\n total even no:%d",ecnt);
	printf("\n\n------------------------------------------\n\n");
	printf("\n total odd no:%d",ocnt);
	printf("\n\n------------------------------------------\n\n");
	return 0;
	
}
