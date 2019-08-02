int gcd1(int num1, int num2)
{
	int temp;
	while (num1 % num2 != 0)
	{
		temp = num1;
		num1 = num2;
		num2 = temp % num2;
	}
	return num2;
}

int gcd2(int num1, int num2)
{
	if (num1 % num2 == 0)
		return num2;

	return gcd2(num2, num1%num2);
}

int gcd3(int num1, int num2)
{
	return num1 % num2 == 0 ? num2 : gcd3(num2, num1 % num2);
}

int lcd(int num1, int num2)
{
	return (num1*num2) / gcd1(num1, num2);
}