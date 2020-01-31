/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 22:48:55 by gdudorov          #+#    #+#             */
/*   Updated: 2020/01/11 23:10:38 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
			return (0);
	if (power == 0)
			return (1);
	result = nb * ft_recursive_power(nb, power-1);
	return (result);
}
