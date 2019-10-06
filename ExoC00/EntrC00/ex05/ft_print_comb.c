/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 21:51:11 by ameki             #+#    #+#             */
/*   Updated: 2019/09/04 15:08:05 by ameki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char num1, char num2, char num3)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
	if (!(num1 == '7' && num2 == '8' && num3 == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_putchar(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

int main ()
{
	ft_print_comb();
}
