/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 21:37:49 by gdudorov          #+#    #+#             */
/*   Updated: 2020/01/15 22:21:21 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argc > 1)
	{
		j = 0;
		while (argv[i][j] != '\0')
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		i++;
		argc--;
	}
	return (0);
}
