#include<Stdio.h>
#include<math.h>
int over(int n)
{
	int all;
	all = pow(n, 2);
	return all;
}
int main()
{
	int n, sum = 0;
	printf("Input your number : ");
	scanf_s("%d", &n);
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= i;j++)
		{ 
			printf(" %d^2 ", j);
			sum += over(j);
			if (j != i)
			{
				printf(" + ");
			}
			else
			{
				printf(" =  %d ",sum);
			}
			
		}
		printf("\n");
		sum = 0;
	}

	
	return 0;
}