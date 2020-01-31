/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 00:24:26 by gdudorov          #+#    #+#             */
/*   Updated: 2020/01/21 19:48:54 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		result;
	int		pass;

	i = 0;
	pass = 0;
	while (tab[i])
	{
		result = f(tab[i]);
		if (result == 1)
			pass++;
		i++;
	}
	return (pass);
}
