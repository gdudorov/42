/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 18:32:54 by gdudorov          #+#    #+#             */
/*   Updated: 2020/01/26 00:48:00 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		solve_brakets(char *str, int size, int start);
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

int	ft_atoi(const char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * negative);
}

int	calculate(char *str, int size, int start) 
{
	int		res;
	char	*buf;
	int	j;

	
	res = 0;
	buf = (char*)malloc (sizeof(*buf) * (size + 1));
	buf = str;
	j = start - 1;
	while (buf[++j])
	{
		if (buf[j] >= '0' && buf[j] <= '9')
			res = (buf[j] - 48) + res * 10;
		else if (buf[j] == '(')
			res = solve_brakets(buf, size - j, j);
		else if (buf[j] == '*')
			res = res * calculate(buf, size - j, j + 1);
		else if (buf[j] == '/')
			res = res / calculate(buf, size - j, j + 1);
		else if (buf[j] == '%')
			res = res % calculate(buf, size - j, j + 1);
		else if (buf[j] == '+' && calculate(buf, size - j, j + 1) != 0)
 			res = res + calculate(buf, size - j, j + 1);
		else if (buf[j] == '-' && calculate(buf, size - j, j + 1) != 0)
			res = res - calculate(buf, size - j, j + 1);
//		else if (buf[j] == " ")
	}
	printf ("%d\n", res);
	free(buf);
	return (res);
}

int solve_brakets(char *av, int size, int start)
{
	int		res;
	int		i;
//	int		j;
	char	*buf = NULL;

	res = 0;
	i = start;
//	j = 0;
	while (av[i] != ')' || av[i] != '\0')
	{
		if (av[i] == '(')
			solve_brakets(av, size - 1, start + 1);
		buf[i] = av[i];
		size--;
		i++;
	}
	buf[i] = '\0';
	return  (calculate(buf, size, i));
}


int eval_expr(char *str)
{
	int 	start;
	int		size;
	int		res;
	char	*buf = NULL;
	
	start = 0;
	size = 0;
	while (str[0])
		size++;
//	buf = (char*)malloc(sizeof(*buf) * (i + 1));
	buf = str;
	buf[size + 1] = '\0';
	printf("%d\n", size);
	res = calculate(buf, size, start = 0);
//	free(buf);
	return (res);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
