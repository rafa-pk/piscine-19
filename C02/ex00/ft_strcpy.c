/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:28:38 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/05 19:59:59 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char	*src1 = "ca coule de source";
//	char	dest1[50];
//
//	printf("\n\n");
//	printf("src string: %s\n", src1);
//	printf("dest after func: %s\n\n\n", ft_strcpy(dest1, src1));
//	return (0);
//}
