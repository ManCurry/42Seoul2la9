/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syun <syun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 13:10:04 by syun              #+#    #+#             */
/*   Updated: 2021/10/24 13:28:21 by syun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int divisor;

	if (nb < 2)
		return (0);
	else if (nb <= 3)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	divisor = 3;
	while (divisor < 46341 && divisor * divisor <= nb)
	{
		if (nb % divisor == 0)
			return (0);
		divisor += 2;
	}
	return (1);
}
