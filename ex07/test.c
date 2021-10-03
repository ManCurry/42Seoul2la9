#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	alp;

	alp = 'a';
	while (alp <= 'z')
	{
		ft_putchar(alp);
		alp++;}
	}
int main()
{
	ft_print_alphabet();
	return (0);
}

