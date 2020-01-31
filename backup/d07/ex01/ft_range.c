/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 17:15:19 by gdudorov          #+#    #+#             */
/*   Updated: 2020/01/16 19:52:59 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*result;

	j = 0;
	i = min;
	if (min >= max)
		return (NULL);
	while (i < max)
		i++;
	result = (int*)malloc(sizeof(*result) * (i - min));
	while (min < max)
	{
		result[j] = min;
		j++;
		min++;
	}
	return (result);
}
