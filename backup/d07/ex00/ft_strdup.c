/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:30:38 by gdudorov          #+#    #+#             */
/*   Updated: 2020/01/16 17:13:10 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	str = (char*)malloc(sizeof(*str) * (i + 1));
	while (j <= i)
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
