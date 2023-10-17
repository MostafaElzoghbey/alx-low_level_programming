#include <stdio.h>

char *uniqe_str(char *s)
{
	char *uniqeStr = s;
	int i, j, flag, k = 0;

	if (!s)
		return (&s[0]);
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

int main(void)
{
	char *s = "", *uniqeStr;

	puts("here");
	uniqeStr = uniqe_str(s);
	puts("here");
	printf("%s\n", uniqeStr);
	/* if (*uniqeStr == '\0') 
	{
		printf("NULL\n");
	}
	else
	{
		printf("NOT NULL\n");
	}
	 */
	return (0);
}


