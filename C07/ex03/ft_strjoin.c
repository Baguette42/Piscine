/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:39:33 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/21 11:23:54 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
		len = len + ft_strlen(strs[i++]);
	if (size > 0)
		len = len + ((size - 1) * ft_strlen(sep));
	dest = malloc(sizeof(char) * len + 1);
	if (dest == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(strs[i], &dest[j]);
		j = j + ft_strlen(strs[i]);
		if (i++ < size - 1)
			j += ft_strlen(sep) + (ft_strcpy(sep, &dest[j]) - &dest[j]);
	}
	dest[j] = '\0';
	return (dest);
}
