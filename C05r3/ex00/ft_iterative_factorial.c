/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:41:25 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/13 18:59:05 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	nbf;

	nbf = 1;
	if (nb < 0)
		return (0);
	while (nb)
	{
		nbf = nbf * nb;
		nb--;
	}
	return (nbf);
}
