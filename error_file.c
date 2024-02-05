// finding number of vowels

#include <stdio.h>
#include<ctype.h>

int main (void) {

	char neWord[30], word[30], words[30], ch = 0;
	char vowels[] = {'a', 'e', 'i', 'o', 'u'};

	printf("Enter a string:\t");
	scanf("%c", words);

	int count = sizeof(words)/ sizeof(int);
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
