#include<stdio.h>
int main()
{
	int p, q;
	scanf("%d %d",&p,&q);
	if(p==0&&q==0)
	{
		printf("0");
	}
	if(p==0&&q==1)
	{
		printf("1");

	}
	if(p==1&&q==0)
	{
		printf("1");
	}
	if(p==1&&q==1)
	{
		printf("0\n");
	}
}
