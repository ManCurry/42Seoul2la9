/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syun <syun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:54:54 by syun              #+#    #+#             */
/*   Updated: 2021/10/26 16:03:08 by syun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*numptr;
	int	i;

	if (max <= min)
		return (0);
	numptr = (int *)malloc(sizeof(int) * (max - min));
	if (numptr == NULL)
		return (-1);
	i = 0;
	while (max > min)
	{
		numptr[i] = min;
		min++;
		i++;
	}
	*range = numptr;
	return (size);
}
