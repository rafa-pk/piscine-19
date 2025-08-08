/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:11:03 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/06 19:13:06 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

//int	main(void)
//{
//	char	s1[] = "tout pareil";
//	char	s2[] = "tout pasteque";
//
//	printf("\n\nmy diff: %d\n", ft_strcmp(s1, s2));
//	printf("og diff: %d\n\n", strcmp(s1, s2));
//	return (0);
//}
