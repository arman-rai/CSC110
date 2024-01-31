// convert lower case to upper

#include <stdio.h>
#include <string.h>

int main(void) {

	char word[50];
	int i;

	printf("Enter any word: ");
	scanf("%s", word);

	for (int i = 0; i < strlen(word); i++)
	{
		if (word[i] >= 97 && word[i] < 123)
		{
			word[i] = word[i] -32;
		}
	}
	printf(word);


}
