/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:37:04 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/21 13:51:56 by nle-gall         ###   ########.fr       */
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

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	while (src[i])
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

	i = 0;
	tstru = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tstru == NULL)
		return (NULL);
	while (i < ac)
	{
		tstru[i].size = ft_strlen(av[i]);
		tstru[i].str = av[i];
		tstru[i].copy = ft_strdup(av[i]);
		i++;
	}
	tstru[i].str = 0;
	tstru[i].size = 0;
	tstru[i].copy = 0;
	return (tstru);
}
