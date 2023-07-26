/**
*cap_string - capitalizes all words of a string
*@a: string
*Return: char
*/

char *cap_string(char *a)
{
	int i = 0;

	while (a[i])
	{
		while (!(a[i] >= 'a' && a[i] <= 'z'))
		{
			i++;
		}
		if (i == 0 ||
		a[i - 1] == ' ' ||
		a[i - 1] == '\t' ||
		a[i - 1] == '\n' ||
		a[i - 1] == ',' ||
		a[i - 1] == ';' ||
		a[i - 1] == '.' ||
		a[i - 1] == '!' ||
		a[i - 1] == '?' ||
		a[i - 1] == '"' ||
		a[i - 1] == '(' ||
		a[i - 1] == ')' ||
		a[i - 1] == '{' ||
		a[i - 1] == '}')
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
