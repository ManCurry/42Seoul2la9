/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r03.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkoo <bkoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:24:55 by bkoo              #+#    #+#             */
/*   Updated: 2021/10/11 09:27:09 by syun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_point(int width, int height, int xpo, int ypo)
{	
	if ((xpo == 1 && ypo == 1) || (xpo == 1 && ypo == height))
	{
		return ('A');
	}
	else if ((xpo == width && ypo == 1) || (xpo == width && ypo == height))
	{
		return ('C');
	}
	else
	{
		if ((xpo > 1 && ypo == 1) || (xpo > 1 && ypo == height))
		{
			return ('B');
		}
		else if ((xpo == 1 && ypo > 1) || (xpo == width && ypo > 1))
		{
			return ('B');
		}
		else
			return (' ');
	}
}

void	rush(int x, int y)
{
	int	xpo;
	int	ypo;

	xpo = 1;
	ypo = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (ypo <= y)
	{
		while (xpo <= x)
		{
			ft_putchar(ft_point(x, y, xpo, ypo));
			xpo++;
		}
		xpo = 1;
		ypo++;
		ft_putchar('\n');
	}
}
