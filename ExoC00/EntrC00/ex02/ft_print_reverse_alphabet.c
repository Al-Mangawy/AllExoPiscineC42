/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 15:53:22 by ameki             #+#    #+#             */
/*   Updated: 2019/09/01 15:56:16 by ameki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char lettre;

	lettre = 'z';
	while (lettre >= 'a')
	{
		write(1, &lettre, 1);
		lettre--;
	}
}
