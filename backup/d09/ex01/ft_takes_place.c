/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 08:29:19 by gdudorov          #+#    #+#             */
/*   Updated: 2020/01/17 10:53:39 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0)
		printf("%d.00 A.M. AND %d.00 A.M.\n", (hour + 12), (hour + 1));
	if (hour < 11 && hour != 0)
		printf(" %d.00 A.M. AND %d.00 A.M.\n", (hour), (hour + 1));
	else if (hour == 11)
		printf("%d.00 A.M. AND %d.00 P.M.\n", (hour), (hour + 1));
	else if (hour > 12 && hour < 23)
		printf(" %d.00 P.M. AND %d.00 P.M.\n", (hour - 12), (hour - 11));
	else if (hour == 12)
		printf(" %d.00 P.M. AND %d.00 P.M.\n", (hour), (hour - 11));
	else if (hour == 23)
		printf(" %d.00 P.M. AND %d.00 A.M.\n", (hour - 12), (hour - 11));
}
