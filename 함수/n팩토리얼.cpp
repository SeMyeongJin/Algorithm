int factorial(int n)
{
	if (n == 1 || n == 0) return 1;

	return n * factorial(n - 1);
}

int factorial2(int n)
{
	int ret = 1;

	for (int i = 1; i <= n; i++)
		ret *= i;

	return ret;
}