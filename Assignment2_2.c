// 2. Accept one number from user and print that number of * on screen.

# include<stdio.h>

void Display(int iNo)
{
	int iCnt = 1;
	while (iNo>iCnt)
	{
		printf("* ");
		iNo --;
	}
}

int main()
{
	int iValue = 0;
	printf("Enter a number");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}