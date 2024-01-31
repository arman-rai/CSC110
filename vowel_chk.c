// finding number of vowels

#include <stdio.h>
#include<ctype.h>
#include<string.h>

char tolower(char word[]) 
{
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
	return word;
}


int main (void) {

	char neWord[30], word[30], words[30], ch;
	char vowels[] = {'A', 'E', 'I', 'O', 'U'};

	printf("Enter a string:\t");
	scanf("%s", words);

	int count = sizeof(words)/ sizeof(char);
	neWord = tolower(words);

	while(neWord[ch] != '\0') 
	{
		for (int i = 0; i < count; i++)
		{
			if (neWord[i] == vowels[i])
			{
				printf("%s\n",neWord[i] );
			}
		}
		ch++;

	}

}