/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:17:46 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/07 15:51:16 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strnlen(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i <= size && str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;
	unsigned int	dest_len;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strnlen(dest, size);
	j = dest_len;
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (j < size)
		dest[j] = '\0';
	return (dest_len + src_len);
}

//int	main(void)
//{
//	char dest[] = "I want to have more ";
//	char src[] = "Here you have!";
//	char dest2[] = "I want to have more ";
//	char src2[] = "Here you have!";
//
//	printf("\n\nog func: %zu\n", strlcat(dest, src, 20));
//	printf("my func: %u\n\n", ft_strlcat(dest2, src2, 20));
//	//run with -lbsd flag
//	return (0);
//}
