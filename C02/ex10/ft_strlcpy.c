/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:36:40 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/06 18:56:13 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(src);
	if (i + 1 < size)
	{
		j = -1;
		while (++j < i + 1)
		{
			dest[j] = src[j];
		}
	}
	else if (size)
	{
		j = -1;
		while (++j < size - 1)
		{
			dest[j] = src[j];
		}
		dest[j] = '\0';
	}
	return (i);
}
