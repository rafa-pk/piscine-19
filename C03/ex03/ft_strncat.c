/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 10:59:24 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/07 15:04:16 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	while (i < nb && src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char	dest[] = "Hello";
//	char	src[] = " World";
//	char    dest2[] = "Hello";
//	char    src2[] = " World";
//
//	printf("\n\nog func: %s\n", strncat(dest, src, 6));
//	printf("my func: %s\n\n", ft_strncat(dest2, src2, 6));
//	return (0);
//}
