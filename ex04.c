#include <unistd.h>
int count(char *word);
void ft_putchar (char c);
char *reverse( char *word_reverse);
int main (void)
{
reverse("yahya");
}
void ft_putchar (char c)
{
	write(1, &c, 1); 
}
int count(char *word)
{
	int i = 0;
	while (word[i] != '\0') 
	{ 
		i++;
	}
	return i;
}

char *reverse(char *word_reverse) 
{
	int strlen = count(word_reverse);
	int p = strlen - 1;
	while(p >= 0 )
	{
		ft_putchar(word_reverse[p]);
		p--;
	}
	return word_reverse;
}
