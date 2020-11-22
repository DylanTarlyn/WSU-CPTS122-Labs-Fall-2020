#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverseString(char* string)
{
	if (*string != '\0')
	{
		reverseString(string + 1);
		printf("%c", *string);
	}
}

int main(void)
{
	char string[] = "String";
	reverseString(string);

	return 0;
}
