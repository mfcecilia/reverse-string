#include <string.h>
#include <stdio.h>

int main(void)
{
	char s = "string in reverse";
	int i; 
	for (i = strlen(s) - 1; i >= 0; i--)
		putchar(s[i]);
		putchar('\n');
}
