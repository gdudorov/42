/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amustafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 18:36:42 by amustafi          #+#    #+#             */
/*   Updated: 2020/01/12 18:16:50 by gkurniaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (x < 0 || y < 0)
		return ;
	while (i <= y)
	{
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x && y != 1 && x != 1))
				ft_putchar('/');
			else if ((i == y && j == 1) || (j == x && i == 1))
				ft_putchar('\\');
			else if (i == y || j == x || i == 1 || j == 1)
				ft_putchar('*');
			else if ((i == 1 && i < y) || (j > 1 && j < x))
				ft_putchar(' ');
			j++;
		}
		j = 1;
		ft_putchar('\n');
		i++;
	}
}
