/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 22:23:07 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/22 00:42:01 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_charset_comp(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_charset_comp(str[i], charset) == 1)
			i++;
		while (str[i] && ft_charset_comp(str[i], charset) == 0)
		{
			count++;
			while (str[i] && ft_charset_comp(str[i], charset) == 0)
				i++;
		}
	}
	return (count);
}

char	*ft_strdup_tab(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && ft_charset_comp(str[i], charset) == 0)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && ft_charset_comp(str[i], charset) == 0)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		size;
	char	**tab;

	i = 0;
	size = ft_count_word(str, charset);
	tab = malloc(sizeof(char *) * (size + 1));
	if (tab == NULL)
		return (NULL);
	while (*str)
	{
		while (*str && ft_charset_comp(*str, charset) == 1)
			str++;
		if (*str && ft_charset_comp(*str, charset) == 0)
		{
			tab[i] = ft_strdup_tab(str, charset);
			if (tab == NULL)
				return (NULL);
			i++;
			while (*str && ft_charset_comp(*str, charset) == 0)
				str++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
