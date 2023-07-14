#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		//malloc, free �Լ� ����� ��� ����
#include <string.h>		//memset �Լ��� ����� ��� ����	, strlen �Լ��� ����� ��� ����
#include <stdbool.h>
#include <math.h>

struct Person {
	char name[30];
	int age;
};

int main()
{
	struct Person *p[5];
	

	for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++)
	{
		p[i] = malloc(sizeof(struct Person));
	}

	for (int j = 0; j < 5; j++)
	{
		scanf("%s %d", &p[j]->name, &p[j]->age);
	}

	int oldest = 0;
	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		if (oldest < p[i]->age)
		{
			oldest = p[i]->age;
			cnt = i;
		}
	}

	printf("%s\n", p[cnt]->name);

	for (int i = 0; i < sizeof(p) / sizeof(struct Person); i++)
	{
		free(p[i]);
	}
	
	return 0;
}