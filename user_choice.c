#include<stdio.h>
#include<math.h>
int prime(int x)
{
	int i,sum=0;
	for(i=1;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			sum++;
		}
	}
	if(sum==1)
	{
		printf("%d is a Prime Number",x);
	}
	else
	{
		printf("%d is a NOT Prime Number",x);
	}
}

int primes_range(int x,int y)
{
	printf("Primes are ");
	while(x<=y)
	{
		int i=1,sum=0;
		for(i;i<=sqrt(x);i++)
		{
			if(x%i==0)
			{
				sum++;
			}
		}
		if(sum==1)
		{
			if(x!=1)
			{
				printf("%d ",x);
			}
		}
		x++;
	}
}

int composites_range(int x,int y)
{
	printf("composites are ");
	while(x<=y)
	{
		int i=1,sum=0;
		for(i;i<=sqrt(x);i++)
		{
			if(x%i==0)
			{
				sum++;
			}
		}
		if(sum>1)
		{
			if(x!=1)
			{
				printf("%d ",x);
			}
		}
		x++;
	}
}

int main()
{
	int a,m,n;
	printf("1. Primality Check\n2. Primes in a range\n3. Composites in a range\n");
	printf("Enter your Choice: ");
	scanf("%d",&a);
	printf("\n");
	if(a==1)
	{
		printf("Enter a number for Primality check: ");
		scanf("%d",&m);
		prime(m);
	}
	else if(a==2)
	{
		printf("Enter a Range to check the primes: ");
		scanf("%d%d",&m,&n);
		primes_range(m,n);
	}
	else if(a==3)
	{
		printf("Enter a Range to check the Composites: ");
		scanf("%d%d",&m,&n);
		composites_range(m,n);
	}
	else
	{
		printf("Enter Correct Option!!!");
	}
}
