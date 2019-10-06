/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:28:23 by ameki             #+#    #+#             */
/*   Updated: 2019/09/10 22:30:31 by ameki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 65 && str[n] <= 90)
		{
			str[n] = str[n] + 32;
		}
		n++;
	}
	return (str);
}