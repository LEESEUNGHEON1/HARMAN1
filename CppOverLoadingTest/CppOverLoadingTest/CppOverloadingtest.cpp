#include <stdio.h>

int abs(int val);

int main()
{
	int i = -1;
	float a = -2.0;
	printf("i가 %d 일 때 ====> i의 절대값은 %d 입니다.", i, abs(i));
}

int abs(int val)
{
	//if (val < 0) return -val;
	//return val;

	return (val < 0) ? -val : val;
}

float fabs(float val)
{
	//if (val < 0) return -val;
	//return val;

	return (val < 0) ? -val : val;
}