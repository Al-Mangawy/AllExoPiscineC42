/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:55:18 by ameki             #+#    #+#             */
/*   Updated: 2019/09/13 14:03:18 by ameki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	n;
	int	r;
	int	ng;

	n = 0;
	r = 0;
	ng = 1;
	while (str[n] == 32 || (str[n] >= 9 && str[n] <= 13))
	{
		n++;
	}
	while (str[n] == '+' || str[n] == '-')
	{
		if (str[n] == '-')
			ng = -ng;
		n++;
	}
	while (str[n] >= 48 && str[n] <= 57)
	{
		r = r * 10 + str[n] - 48;
		n++;
	}
	r *= ng;
	return (r);
}
