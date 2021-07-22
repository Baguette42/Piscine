/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:37:04 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/21 09:47:29 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (*src)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tstru;
	int			i;

	if (ac < 0)
		ac = 0;
	tstru = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tstru == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tstru[i].size = ft_strlen(av[i]);
		tstru[i].str = av[i];
		tstru[i].copy = ft_strdup(av[i]);
		i++;
	}
	tstru[i].str = 0;
	return (tstru);
}
#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main()
{
	char *lol[3];
	int i = 0;
	lol[0] = "yes";
	lol[1] = "yessaie";
	lol[2] = "hon hon gaston";
	t_stock_str *prout = ft_strs_to_tab(3, lol);
	while (prout[i].str)
	{
		printf("%d, %s, %s\n", prout[i].size, prout[i].str, prout[i].copy);
		i++;
	}
}
