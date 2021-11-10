// 4. Write a program which checks whether 7th & 8th & 9th bit is On or OFF.

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo)
{
	unsigned int imask = 0x000001C0,result = 0;
	result = imask & iNo;
	if (result == imask)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int main()
{
	unsigned int iValue = 0;
	bool bret = false;
	
	printf("Enter a number \n");
	scanf("%u",&iValue);
	
	bret = CheckBit(iValue);
	
	if (bret == true)
	{
		printf("Bits are on.\n");
		
	}
	else
	{
		printf("Bits are off.\n");
	}
	return 0;
}