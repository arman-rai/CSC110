// pigLatin

#include <stdio.h>
#include <string.h>

int main (void) {

	char word[50], pig[50], ch, sp;

	printf("Enter a sentence: ");
	scanf("%[^\n]s", word);
	int i, j=0,fl=1;
	for (i = 0; i < strlen(word); i++)
	{
		if (fl)
		{
			ch = word[i];
			fl=0;
		}
		else if (word[i] == ' ')
		{
			pig[j++] = ch;
			pig[j++] = 't';
			pig[j++] = 'y';
			pig[j++] = ' ';
			fl=1;
		}
		else
			pig[j++] = word[i];
	}

	printf(pig);

}