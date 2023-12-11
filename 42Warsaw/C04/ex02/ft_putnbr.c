/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:05:59 by mbany             #+#    #+#             */
/*   Updated: 2023/12/04 15:56:14 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

// int main()
// {
//     int number = -2147483648;
//     int number2 = 15;
//     int number3 = 8;
//     int number4 = -214;
//     int number5 = 1;

//     ft_putnbr(number);
//     ft_putchar('\n');
//     ft_putnbr(number2);
//     ft_putchar('\n');
//     ft_putnbr(number3);
//     ft_putchar('\n');
//     ft_putnbr(number4);
//     ft_putchar('\n');
//     ft_putnbr(number5);
//     ft_putchar('\n');

//     return 0;
// }