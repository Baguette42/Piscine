/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 22:19:33 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/12 18:51:21 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	error_base(char *base)
{
	char	*b;
	int		i;

	b = base;
	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*b)
	{
		if (*b == '+' || *b == '-' || *b < 32)
			return (0);
		i = 1;
		while (*(b + i))
		{
			if (*(b + i) == *b)
				return (0);
			i++;
		}
		b++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	lbase;
	unsigned int	unbr;

	if (error_base(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			unbr = -1 * nbr;
		}
		else
			unbr = nbr;
		lbase = ft_strlen(base);
		if (unbr >= lbase)
		{
			ft_putnbr_base(unbr / lbase, base);
			ft_putnbr_base(unbr % lbase, base);
		}
		else
		{
			write(1, base + unbr, 1);
		}
	}
}
