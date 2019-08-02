char *mysubstr(char * str, int start, int count)
{
	char * ret = (char*)malloc(sizeof(char)*(start + count - 1));

	memset(ret, 0, (start + count - 1));

	for (int i = start, j = 0; i < start + count; i++, j++)
	{
		ret[j] = str[i];
	}

	return ret;
}