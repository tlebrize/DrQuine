#include <stdio.h>
/*
	comment
*/
	
void	printyoupi(char *s1, char *s2)
{
	fputs(s1, stdout);
	fputs(s1, stdout);
	putchar(34);
	fputs(s2, stdout);
	putchar(34);
	putchar(44);
	putchar(10);
}

int		main(void)
{
	/*
		bibou
	*/
	char	*b[] = {
		"#include <stdio.h>",
		"/*",
		"	comment",
		"*/",
		"	",
		"void	printyoupi(char *s1, char *s2)",
		"{",
		"	fputs(s1, stdout);",
		"	fputs(s1, stdout);",
		"	putchar(34);",
		"	fputs(s2, stdout);",
		"	putchar(34);",
		"	putchar(44);",
		"	putchar(10);",
		"}",
		"",
		"int		main(void)",
		"{",
		"	/*",
		"		bibou",
		"	*/",
		"	char	*b[] = {",
		"	};",
		"	for (int i = 0; i < 22; i++)",
		"		puts(b[i]);",
		"	for (int i = 0; i < 31; i++)",
		"		printyoupi(b[4], b[i]);",
		"	for (int i = 22; i < 31; i++)",
		"		puts(b[i]);",
		"	return (0);",
		"}",
	};
	for (int i = 0; i < 22; i++)
		puts(b[i]);
	for (int i = 0; i < 31; i++)
		printyoupi(b[4], b[i]);
	for (int i = 22; i < 31; i++)
		puts(b[i]);
	return (0);
}
