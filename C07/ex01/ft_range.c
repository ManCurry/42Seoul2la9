/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syun <syun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:48:58 by syun              #+#    #+#             */
/*   Updated: 2021/10/27 09:29:45 by syun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*numptr;
	int	i;

	if (max <= min)
		return (NULL);
	numptr = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		*(numptr + i) = min;
		min++;
		i++;
	}
	return (numptr);
}
