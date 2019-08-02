int pow(int a, int n)
{
	int ret = 1;

	while (n-- > 0)
		ret *= a;

	return ret;
}

int reverse(int num)
{
	int ret = 0;
	int digit = 0;

	while (num / pow(10, digit) > 0)
		digit++;

	int iter = digit;

	while (iter > 0)
	{
		ret += num / pow(10, iter - 1) * pow(10, digit - iter);
		num %= pow(10, --iter);
	}
	return ret;
}