/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 20:09:14 by gdudorov          #+#    #+#             */
/*   Updated: 2020/01/11 21:50:29 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0)
		return (1);
	else
	{
		result = 1;
		if (nb > 0 && nb <= 12)
		{
			result = nb * ft_recursive_factorial(nb - 1);
		}
		return (result);
	}
	return (0);
}
