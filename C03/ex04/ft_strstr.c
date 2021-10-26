/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syun <syun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:36:23 by syun              #+#    #+#             */
/*   Updated: 2021/10/19 10:41:32 by syun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	while (to_find[len])
		len++;
	if (len == 0)
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j + 1 == len)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
