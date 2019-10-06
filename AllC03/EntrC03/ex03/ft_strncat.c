/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 19:56:04 by ameki             #+#    #+#             */
/*   Updated: 2019/09/16 16:21:45 by ameki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int r;
	unsigned int c;

	r = 0;
	c = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	while (src[c] != '\0' && c < nb)
	{
		dest[r + c] = src[c];
		c++;
	}
	dest[r + c] = '\0';
	return (dest);
}
