/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 11:44:10 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/07 14:48:54 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[0])
		{
			while (str[i + j] && str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

//int	main(void)
//{
//	char	str[] = "hmmm, where 1s it";
//	char	to_find[] = "1s";
//
//	printf("\n\nog str: %s\n", strstr(str, to_find));
//	printf("my str: %s\n\n", ft_strstr(str, to_find));
//	return (0);
//}
