#include <stdio.h>

char *uniqe_str(char *s)
{
	char *uniqeStr = "";
	int *index, i, j, flag, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (i == j)
				continue;
			flag = 0;
			if (s[i] == s[j])
				break;
			flag = 1;
		}
		if (flag == 1)
		{
			uniqeStr[k] = s[i];
			k++;
		}
	}
	return (uniqeStr);
}

void main(void)
{
	char *s = "asdzasd", *uniqeStr;

	puts("here");
	uniqeStr = uniqe_str(s);
	if (*uniqeStr == '\0')
	{
		// printf("%s\n", uniqeStr);
		printf("NULL\n");
	}
	else
	{
		printf("NOT NULL\n");
	}
}
