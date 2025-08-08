/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 10:26:06 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/07 10:58:30 by rvaz-da-         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char	dest[] = "";
//	char	src[] = "de source";
//	char    dest2[] = "";
//	char    src2[] = "de source";
//
//
//	printf("\n\nog func: %s\n", strcat(dest, src));
//	printf("my func: %s\n\n", ft_strcat(dest2, src2));
//	return (0);
//}
