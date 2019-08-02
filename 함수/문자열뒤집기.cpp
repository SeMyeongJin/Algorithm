char * reverse(char * str1)
{
	int size = strlen(str1);
	char * str = (char*)malloc(sizeof(char)*size + 1);

	for (int i = 0; i < size; i++)
	{
		str[i] = str1[size - 1 - i];
	}
	str[size] = '\0';

	return str;
}