//4d array
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,o,p;
	printf("Enter the size of the 4d array:\n");
	scanf("%d%d%d%d",&m,&n,&o,&p);
	int ****arr;
	arr=(int*)malloc(m*sizeof(int));
	for(int i=0;i<m;i++)
	{
		arr[i]=(int*)malloc(n*sizeof(int**));
		for(int j=0;j<n;j++)
		{
			arr[i][j]=(int*)malloc(o*sizeof(int));
			for(int k=0;k<o;k++)
			{
				arr[i][j][k]=(int*)malloc(p*sizeof(int));
			}
		}
	}
	printf("Now Enter the values:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<o;k++)
			{
				for(int l=0;l<p;l++)
				{
					scanf("%d",((*(arr+i)+j)+k)+l);
				}
			}
		}
	}
		for(int i=0;i<m;i++)
		{
		printf("Stack %d\n",i+1);
			for(int j=0;j<n;j++)
			{
				for(int k=0;k<o;k++)
				{
					for(int l=0;l<p;l++)
					{
						printf("%d ",((((arr+i)+j)+k)+l));
					}
					printf("\n");
				}
				printf("\n\n");
			}
			printf("\n");
		}
		return 0;
	}