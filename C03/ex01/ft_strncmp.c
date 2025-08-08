/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:39:24 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/07 10:22:57 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

//int	main(void)
//{
//	char	s1[] = "blablabla";
//	char	s2[] = "blublablu";
//
//	printf("\n\nog res: %d\n", strncmp(s1, s2, 4));
//	printf("my res: %d\n\n", ft_strncmp(s1, s2, 4));
//	printf("og res: %d\n", strncmp(s1, s2, 0));
//	printf("my res: %d\n\n", ft_strncmp(s1, s2, 0));
//	return (0);
//}
