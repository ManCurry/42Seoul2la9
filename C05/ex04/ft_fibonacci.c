/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syun <syun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:58:46 by syun              #+#    #+#             */
/*   Updated: 2021/10/24 13:04:02 by syun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int num;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index <= 2)
		return (1);
	else
	{
		num = ft_fibonacci(num - 2) + ft_fibonacci(num - 1);
		return (num);
	}
}
