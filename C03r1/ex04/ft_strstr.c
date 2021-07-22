/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:20:57 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/12 18:37:11 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>

int	ft_strlen(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	l = ft_strlen(to_find);
	if (l == 0)
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
		}
		if (j == l)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
