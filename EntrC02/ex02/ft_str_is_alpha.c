/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:28:17 by ameki             #+#    #+#             */
/*   Updated: 2019/09/11 18:25:52 by ameki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (!((str[n] >= 65 && str[n] <= 90) ||
			(str[n] >= 97 && str[n] <= 122)))
		{
			return (0);
		}
		n++;
	}
	return (1);
}
