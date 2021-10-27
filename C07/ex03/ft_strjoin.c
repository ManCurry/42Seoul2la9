/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syun <syun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:03:39 by syun              #+#    #+#             */
/*   Updated: 2021/10/27 09:29:09 by syun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

long long	ft_strlen(char *str)
{
	long long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	char		*temp;
	char		*result;
	long long	strs_len;

	if (size <= 0)
	{
		result = ((char *)malloc(1));
		result[0] = 0;
		return (result);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	result = (char *)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	temp = ft_strcpy(result, strs[0]);
	i = 1;
	while (i < size)
	{
		temp = ft_strcpy(temp, sep);
		temp = ft_strcpy(temp, strs[i++]);
	}
	*temp = 0;
	return (result);
}
