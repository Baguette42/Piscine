/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:39:33 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/19 16:54:52 by nle-gall         ###   ########.fr       */
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

char	*ft_strcat(char *src, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[i])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_totallen(char **str, char *sep, int size)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(str[i]);
		i++;
		if (str[i])
			len = len + ft_strlen(sep);
	}
	len = len + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*fstr;
	int		i;
	int		len;

	i = 0;
	len = ft_totallen(strs, sep, size);
	fstr = malloc(sizeof(char) * len);
	if (fstr == NULL)
		return (NULL);
	while (i < size)
	{
		ft_strcat(strs[i], fstr);
		if (strs[i])
			ft_strcat(sep, fstr);
		i++;
	}
	return (fstr);
}
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int main()
{
	char *tablo[6];
	tablo[0] = "coucou";
	tablo[1] = "bite";
	tablo[2] = "fesse";
	tablo[3] = "de";
	tablo[4] = "la";
	tablo[5] = "merde";
	printf("%s\n", ft_strjoin(6, tablo, "!!!!!"));
	return (0);
}
