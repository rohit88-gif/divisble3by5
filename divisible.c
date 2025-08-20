

int main()
{
	int num;
	
	printf("enter the number ");
	scanf("%d",& num);
	
	if(num%3==0 && num%5==0)
	{
		printf("divsible by 3 and 5");
	}
	else if(num%3==0)
	{
		printf("divisble by 5 not 3");
	}
	else if(num%5==0)
	{
		printf("divsible by 3 not 5");
	}
	else
	{
		printf("divisible by none");
	}
}