/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 20:40:49 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/06 17:15:50 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	f;

	i = 0;
	f = 1;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
		{
			f = 0;
		}
		i++;
	}
	return (f);
}
