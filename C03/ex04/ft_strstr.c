/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:20:57 by nle-gall          #+#    #+#             */
/*   Updated: 2021/07/13 16:13:08 by nle-gall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == 0)
	{
		return (str);
	}
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] && str[i] == to_find[i])
			{
				i++;
			}
			if (to_find[i] == 0)
			{
				return (str);
			}
		}
		str++;
	}
	return (0);
}
