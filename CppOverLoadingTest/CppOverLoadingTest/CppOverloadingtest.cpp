#include <stdio.h>

int abs(int val);

int main()
{
	int i = -1;
	float a = -2.0;
	printf("i�� %d �� �� ====> i�� ���밪�� %d �Դϴ�.", i, abs(i));
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