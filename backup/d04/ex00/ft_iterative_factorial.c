/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 16:14:23 by gdudorov          #+#    #+#             */
/*   Updated: 2020/01/11 20:03:01 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 0)
		return (1);
	else
	{
		result = 1;
		while (nb > 0 && nb <= 12)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
	return (0);
}
