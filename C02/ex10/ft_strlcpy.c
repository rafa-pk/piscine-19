/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:21:31 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/06 19:21:38 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

//int	main(void)
//{
//	char	src[] = "wesh wesh canapeche";
//	char	dest[50];
//
//	printf("\n\n\nsrc b4: %s\n dest b4: %s\n\n", src, dest);
//	ft_strlcpy(dest, src, 20);
//	printf("src after: %s\n dest after: %s\n\n\n", src, dest);
//	return (0);
//}
