/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:36:31 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/12 15:07:50 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lend;
	unsigned int	lens;

	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	if (size <= lend)
	{
		return (size + lens);
	}
	i = 0;
	while (src[i] != '\0' && (lend + 1) < size)
	{
		dest[lend] = src[i];
		i++;
		lend++;
	}
	dest[lend] = '\0';
	return (lend + ft_strlen(&src[i]));
}
