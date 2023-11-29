/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:47:35 by mbany             #+#    #+#             */
/*   Updated: 2023/11/28 14:28:26 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *a / *b;
	*b = i % *b;
}

// int main()
// {
//     int a = 10;
//     int b = 3;
//     ft_ultimate_div_mod(&a, &b);

//     printf("Wartość a po funkcji: %d\n", a);
//     printf("Wartość b po funkcji: %d\n", b);

//     return 0;
// }
