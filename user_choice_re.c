#include<stdio.h>
#include<math.h>
int prime(int x)
{
	int j,sum=0;
	for(j=1;j<=sqrt(x);j++)
	{
		if(x%j==0)
		{
			sum++;
		}
	}
    return sum;
}
void main()
{
	int a,m,n,ans,i;
	printf("1. Primality Check\n2. Primes in a range\n3. Composites in a range\n");
	printf("Enter your choice: ");
	scanf("%d",&a);
	printf("\n");
	if(a==1)
	{
		printf("Enter a number for Primality Check: ");
		scanf("%d",&m);
		ans=prime(m);
		if(ans==1)
		{
			printf("%d is a Prime Number",m);
		}
		else
		{
			printf("%d is a NOT Prime Number",m);
		}
	}
	else if(a==2)
	{
		printf("Enter a Range to check the Primes: ");
		scanf("%d%d",&m,&n);
		printf("Primes are ");
		for(i=m;i<=n;i++)
		{
			ans=prime(i);
			if(ans==1 && i!=1)
			{
				printf("%d ",i);
			}
		}
	}
	else if(a==3)
	{
		printf("Enter a Range to check the Composites: ");
		scanf("%d%d",&m,&n);
		printf("Composites are ");
		for(i=m;i<=n;i++)
		{
			ans=prime(i);
			if(ans!=1 && i!=1)
			{
				printf("%d ",i);
			}
		}
	}
	else
	{
		printf("Enter Correct Option!!!");
	}
}
