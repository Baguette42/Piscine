/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:35:34 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/22 18:49:33 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	crs;
	int	dcs;

	i = 0;
	crs = 1;
	dcs = 1;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			crs++;
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			dcs++;
		i++;
	}
	if (crs == length || dcs == length)
		return (1);
	return (0);
}
