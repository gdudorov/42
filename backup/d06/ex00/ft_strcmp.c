/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:25:34 by gdudorov          #+#    #+#             */
/*   Updated: 2020/01/15 16:24:06 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s1[i] != '\0')
	{
		result = result + (s1[i] - s2[i]);
		i++;
	}
	while (s2[i] != '\0')
	{
		result = result + (s1[i] - s2[i]);
		i++;
	}
	return (result);
}
