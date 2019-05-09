#pragma once
#include "Header.h"
#include <stdio.h>

void insertion_sort(int s[], int n)
{
	int i, j;

	for (i = 1; i < n; i++)
	{
		j = i;
		while ((j > 0) && (s[j] < s[j - 1]))
		{
			swap(&s[j], &s[j - 1]);
			j = j - 1;
		}
	}
	for (i = 0; i < sizeof s + 1; i++)
	{
		printf("Array item: %d\n", s[i]);
	}
}