#include "main.h"

int main(void)
{
	int n;
	if ((n == 0) || (n == 1))
	{
		return (1);
	}
	else
	{
		return n * factorial(n - 1);
	}
}
