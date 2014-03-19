#include <stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main()
{
  	int n, *a, c, d, t,i;
  	clock_t start,end;
  	float time;
	FILE *f;
	f=fopen("isort.txt","w+");
	
	for(n=1000;n<100000;n+=1000) 
 	 {
		fprintf(f,"%d ",n);
		a=malloc(sizeof(int)*n);
  
		for(i=0;i<n;i++)
		{
			a[i]=rand();
		}
 
 		start=clock();
  	
 
  		for (c = 1 ; c <= n - 1; c++) 
		{
    			d = c;
 
    			while ( d > 0 && a[d] < a[d-1]) {
      			t = a[d];
    			a[d] = a[d-1];
    		  	a[d-1] = t;
			d--;
    		}
		}
  
  		end=clock();
  
 		time=(double)(end-start)/CLOCKS_PER_SEC;
		fprintf(f,"%f\n",time);

	} 
  return 0;
}
