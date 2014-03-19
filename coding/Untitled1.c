#include<stdio.h>
#include<math.h>

int main()
{
	int cnt,i,j,k,n,temp1=0,temp2=0,flag,sum;
	int scnt,ssum;
	char ch;
	cnt=0;scnt=0;
	for(i=0;;i++)
	{

		scanf("%d%c",&n,&ch);
		cnt=cnt+n;
		scnt=n*n+scnt;
		if(ch=='\n'){break;}

		//printf("%d\n",cnt);
	}
	i=i+3;
	sum=(i+1)*i;
	sum=sum/2;
	ssum=i*(i+1)*(2*i+1);
	ssum=ssum/6;
	printf("%d\n",sum);
	printf("%d\n",cnt);
	printf("%d\n",i);
	printf("%d\n",scnt);
	printf("%d\n",ssum);
	sum=sum-cnt;
	ssum=ssum-scnt;

	temp1=sum*(int)(1+sqrt((double)(1+ssum)));
	temp2=sum-temp1;
	printf("the first missing no is %d\n",temp1);
	printf("the first missing no is %d\n",temp2);
	return 0;
}
