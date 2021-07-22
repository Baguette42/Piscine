/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:41:33 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/14 21:01:19 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 3)
		return (2);
	if (nb % 2 == 0)
		nb++;
	i = 3;
	while (nb % i != 0)
	{
		i = i + 2;
	}
	if (nb == i)
		return (nb);
	else
		return (ft_find_next_prime(nb + 2));
}
