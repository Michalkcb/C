/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:53:56 by mbany             #+#    #+#             */
/*   Updated: 2023/12/14 15:38:48 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main ()
// {
// 	int *arr;
// 	int min = 5;
// 	int max = 555;
// 	int size = ft_ultimate_range(&arr, min, max);

// 	if (size == -1)
// 		printf("alloc error");
// 	else if (size == 0)
// 		printf("max <= min");
// 	else
// 	{
// 		int i = 0;
// 		while (i < size)
// 		{
// 			printf("%d ", arr[i]);
// 			i++;
// 		}
// 		free(arr);
// 	}
// 	return 0;
// }
