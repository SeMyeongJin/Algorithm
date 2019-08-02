int pow(int a, int n)
{
	int ret = 1;

	while (n-- > 0)
		ret *= a;

	return ret;
}