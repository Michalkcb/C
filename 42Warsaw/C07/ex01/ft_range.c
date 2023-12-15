/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:15:54 by mbany             #+#    #+#             */
/*   Updated: 2023/12/14 15:40:53 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (max <= min)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

// int main(int argc, char **argv)
// {
// if (argc != 3)
// 	return 0;
// int min = atoi(argv[1]);
// int max = atoi(argv[2]);
// int *result = ft_range(min, max);

// if (result != NULL)
// {
// 	int i = 0;
// 	while (i < (max - min))
// {
// 	printf("%d ", result[i]);
// 	i++;
// }
// }
// return 0;
// }
