/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 22:08:02 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/07 10:14:56 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_space(char c)
{
	if (!((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_small(char b)
{
	if (b > 96 && b < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	small;
	int	space;

	i = 0;
	small = 1;
	space = 1;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		small = ft_small(str[i]);
		if (space == 1 && small == 1)
		{
			str[i] = str[i] - 32;
		}
		space = ft_space(str[i]);
		i++;
	}
	return (str);
}
#include <unistd.h>

char	*ft_strcapitalize(char *src);

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "salut, coMMent tu vAs ? 42mOts quArAnTe-dEux; cinQuante+et+un";
	ft_putstr("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un:");
	ft_putstr(ft_strcapitalize(c));
	ft_putstr(":");
	ft_putstr(c);
}
