#include<stdio.h>
int main()
{
	int n;
	printf("enter n : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int count=0;
		for(int j=1;j<=n;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d ", i);
		}
	}
	return 0;
}