/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:55:50 by ameki             #+#    #+#             */
/*   Updated: 2019/09/17 19:24:53 by ameki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char r)
{
	write(1, &r, 1);
}

void	ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		ft_putchar(str[n]);
		n++;
	}
}

int main(int ac, char **av)
{
	int i;

	i = ac - 1;
	while (i > 0)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i--;
	}
	return(0);
}
