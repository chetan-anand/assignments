#include <stdio.h>
#include <stdlib.h>
#include<time.h>
 
int *list,n;
void swap(int *x,int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}

int partition(int i,int j )
{
return((i+j) /2);
}

void quicksort(int list[],int m,int n)
{
int key,i,j,k;
if( m < n)
{
k = partition(m,n);
swap(&list[m],&list[k]);
key = list[m];
i = m+1;
j = n;
while(i <= j)
{
while((i <= n) && (list[i] <= key))
i++;
while((j >= m) && (list[j] > key))
j--;
if( i < j)
swap(&list[i],&list[j]);
}
// swap two elements
swap(&list[m],&list[j]);
// recursively sort the lesser list
quicksort(list,m,j-1);
quicksort(list,j+1,n);
}
}
void printlist(int list[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d\t",list[i]);
}

void main()
{
int n,i;
int list[1000000];
clock_t start,end;
float time;
FILE *f=fopen("rqs.txt","w+");

for(n=1000;n<100000;n+=1000)
{

  fprintf(f,"%d ",n);
  int * list = (int*) calloc (1000000, sizeof(int));//list = calloc(sizeof(int)*n);
 
  for(i=0;i<n;i++)
  {
      list[i]=rand();
      
  }


printf("The list before sorting is:\n");
printlist(list,n);

start=clock();
// sort the list using quicksort
quicksort(list,0,n-1);
end=clock();
		time=(float)(end-start)/CLOCKS_PER_SEC;
		fprintf(f,"%f\n",time);

 
}
}


