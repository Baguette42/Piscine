/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:45:11 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/22 18:45:59 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*rtab;

	i = 0;
	rtab = malloc(sizeof(int) * length);
	if (rtab == NULL)
		return (NULL);
	while (i < length)
	{
		rtab[i] = f(tab[i]);
		i++;
	}
	return (rtab);
}
