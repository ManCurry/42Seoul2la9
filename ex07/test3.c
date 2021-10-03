#include <unistd.h>

int main(void)
{
	void ft_putchar(char c)
	{
		write(1,&c,1);
	}
	void ft_print_reverse_alphabet(void)
	{
	char rev_alphabet;

	rev_alphabet='z';
	while (rev_alphabet >='a')
		{
			ft_putchar(rev_alphabet);
			rev_alphabet--;
		}
	}
return (0);
}
