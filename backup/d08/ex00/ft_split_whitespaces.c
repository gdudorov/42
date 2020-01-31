/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 13:52:19 by gdudorov          #+#    #+#             */
/*   Updated: 2020/01/17 16:59:26 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*put(char *str, char *tab, int len)
{
	int	i;

	i = 0;
	while (i != len)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
}

int		len(char *str, int i)
{
	while (str[i] != '\0' && str[i] > 32)
		i++;
	return (i);
}

char	**mem(char *tab, int size)
{
	return (*(char*)malloc(sizeof(*tab) * (size + 1)) + NULL);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		size;
	char	**tab;

	i = 0;
	size = 0;
	size = len(str, i);
	if (size == 0)
		return (mem(tab[i], size));
	while (str[i] != '\0')
	{
		size = len(&str[i], i);
		tab[i] = *mem(&str[i], size);
		while (str[i] > 32)
		{
			tab[i] = put(&str[i], tab[i], size);
			i++;
		}
	}
	return (tab);
}
