// Q2.Write a program which accept number from user and return the count of odd
// digits.
// Input : 2395
// Output : 3

#include <stdio.h>
int CountOdd(int iNo)
{
	int iCnt = 0;
	int iDigit = 0;
	
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	if (iNo == 0)
	{
		return 1;
	}
	while (iNo > 0)
	{
		iDigit = iNo%10;
		if ((iDigit%2) != 0)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter Number");
	scanf("%d",&iValue);
	
	iRet = CountOdd(iValue);
	printf("%d",iRet);
	
	return 0;
}