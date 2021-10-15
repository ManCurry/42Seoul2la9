/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syun <syun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:36:11 by syun              #+#    #+#             */
/*   Updated: 2021/10/10 14:36:31 by syun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomb2(int n1, int n2)
{
	char	ten;
	char	one;

	ten = (n1 - (n1 % 10)) / 10 + '0';
	one = (n1 % 10 + '0');
	ft_putchar(ten);
	ft_putchar(one);
	ft_putchar(' ');
	ten = (n2 - (n2 % 10)) / 10 + '0';
	one = (n2 % 10 + '0');
	ft_putchar(ten);
	ft_putchar(one);
	if (n1 != 98 && n2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	while (1)
	{
		while (++n2 <= 99)
			ft_putcomb2(n1, n2);
		n1++;
		n2 = n1;
		if (n1 == 99)
			return ;
	}
}
