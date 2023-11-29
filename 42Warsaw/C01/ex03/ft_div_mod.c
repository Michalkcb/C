/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:47:35 by mbany             #+#    #+#             */
/*   Updated: 2023/11/28 14:26:54 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main() {
//     int a = 10;
//     int b = 3;

//     int div;
//     int mod;
//     ft_div_mod(a, b, &div, &mod);

//     printf("Dzielenie: %d\nReszta z dzielenia: %d\n", div, mod);

//     return 0;
// }
