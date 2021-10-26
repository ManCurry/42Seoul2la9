/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syun <syun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 11:44:29 by syun              #+#    #+#             */
/*   Updated: 2021/10/24 12:58:19 by syun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	base;

	base = nb;
	if (base >  base * nb)
		return (0);
	else if (power > 1)
		return (base * ft_recursive_power(base, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (base);
}

int main(void)
{
	printf ("%d", ft_recursive_power(3, 3));
	return (0);
}
