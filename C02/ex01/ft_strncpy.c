/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 09:50:06 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/06 10:07:58 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

//int	main(void)
//{
//	char	*src = "le string a copier";
//	char	dest[50];
//	char	*src1 = "la ce sera trop grand";
//	char	dest1[30];
//
//	printf("\n\n");
//	printf("src: %s\n src1: %s\n\n", src, src1);
//	ft_strncpy(dest, src, 19);
//	ft_strncpy(dest1, src1, 15);
//	printf("dest: %s\n dest1: %s\n\n", dest, dest1);
//	return (0);
//}
