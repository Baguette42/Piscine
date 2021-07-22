/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 19:06:23 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/22 20:56:08 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_o.h"

int	ft_validate_operator(char *operator)
{
	if (operator[1] != '\0')
		return (0);
	if (operator[0] == '+' || operator[0] == '-'
		|| operator[0] == '/' || operator[0] == '*' || operator[0] == '%')
		return (1);
	return (0);
}

void	ft_calculate(char signe, int a, int b)
{
	int	operation;
	int	(*ft_o[5])(int a, int b);

	ft_o[0] = &ft_addition;
	ft_o[1] = &ft_subtraction;
	ft_o[2] = &ft_division;
	ft_o[3] = &ft_multipl;
	ft_o[4] = &ft_modulo;
	if (signe == '+')
		operation = 0;
	else if (signe == '-')
		operation = 1;
	else if (signe == '/')
		operation = 2;
	else if (signe == '*')
		operation = 3;
	else
		operation = 4;
	ft_putnbr(ft_o[operation](a, b));
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (!ft_validate_operator(argv[2]))
		write(1, "0\n", 2);
	else if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
		ft_calculate(argv[2][0], ft_atoi(argv[1]), ft_atoi(argv[3]));
	return (0);
}
