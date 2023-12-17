/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:56:31 by mbany             #+#    #+#             */
/*   Updated: 2023/12/14 15:38:57 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		str_len;
	char	*str;

	i = 0;
	str_len = 0;
	while (i < size)
	{
		str_len += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		str_len += ft_strlen(sep) * (size -1);
	str = (char *)malloc(sizeof(char) * (str_len + 1));
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i + 1 < size)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char *strs[] = {"ABC", "123", "^&*"};
// 	char sep[] = "!!!";
// 	char *result = ft_strjoin(3, strs, sep);
// 	printf("final string id: %s\n", result);
// 	free(result);
// 	return 0;
// }
