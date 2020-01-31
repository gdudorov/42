/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 17:15:19 by gdudorov          #+#    #+#             */
/*   Updated: 2020/01/16 20:42:37 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	size;
	int *tab;

	j = 0;
	i = min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	tab = (int*)malloc(sizeof(int) * size);
	while (min < max)
	{
		tab[j] = min;
		j++;
		min++;
	}
	*range = tab;
	return (size);
}
