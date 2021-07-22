/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:46:14 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/13 18:58:10 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nbf;

	nbf = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		nbf = nbf * nb;
		power --;
	}
	return (nbf);
}
