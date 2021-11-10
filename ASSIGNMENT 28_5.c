// 4. Write a program which accept one number from user and toggle 7th and
// 10th bit of that number. Return modified number.
// Input : 137
// Output : 713

#include<stdio.h>
#include<stdbool.h>

unsigned int OnBit(unsigned int ino)
{
	unsigned int imask = 0x0000000F;
	unsigned int result = 0;
	
	result = (imask) | (ino);
	return result;
	
}

int main()
{
	unsigned int ivalue = 0;
	unsigned int ret = 0;
	printf("Enter a number\n");
	scanf(" %u",&ivalue);
	
	ret = OnBit(ivalue);
	printf("%u",ret);
	

	return 0;
}