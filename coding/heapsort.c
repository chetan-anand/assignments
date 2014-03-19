
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *a,n,i;

void adjust(int,int);
void heapify();


void main()
{
	int temp;
        int t,n;
	clock_t start,end;
	float time;
	FILE *f=fopen("hsort.txt","w+");
	
	for(n=1000;n<100000;n+=1000)
	{
		
		fprintf(f,"%d ",n);
		a=malloc(sizeof(int)*n);
	
		for(i=0;i<n;i++)
		{
			a[i]=rand();
	
		}
	
	        start=clock();	
		heapify();
	
		for(i=n;i>=2;i--)
		{
			temp=a[1];
			a[1]=a[i];
			a[i]=temp;
			adjust(1,i-1);
		}
		end=clock();
		time=(float)(end-start)/CLOCKS_PER_SEC;
		fprintf(f,"%f\n",time);

	
		}
}

void heapify()
{
	int i;
	for(i=n/2;i>=1;i--)
		adjust(i,n);
}
void adjust(int i,int n)
{
	int j,element;
	j=2*i;
	element=a[i];
	while(j<=n)
	{
		if((j<n)&&(a[j]<a[j+1]))
			j=j++;
		if(element>=a[j])
			break;
		a[j/2]=a[j];
		j=2*j;
	}
	a[j/2]=element;
}


