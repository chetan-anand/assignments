//insertion sort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,n,j,key;
	clock_t start,end;
	float time;
	printf("Enter the number of input:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter your choice :\n1.for sorted input \n2.for reverse sorted input \n3.for random input \n");
	scanf("%d",&i);
	switch (i)
	{
		case 1: 
			printf("Enter your sorted input:\n");
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
			break;
		case 2:
			printf("Enter your reverse sorted input\n");
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}		
			break;
		case 3:
			printf("Radom input will be generated by program itself\n");
			for(i=0;i<n;i++)
			{
				a[i]=rand();
			}
			break;
		default:
			printf("Wrong selection\n");
			break;
	}
	start=clock();
		printf("\n");
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && key< a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	end=clock();
	time=(float)(end-start)/CLOCKS_PER_SEC;
	printf("Time taken:	%f\n",time);
	return 0;	

}
