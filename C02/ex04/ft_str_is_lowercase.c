/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:19:44 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/06 11:32:33 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
		return (1);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

//int	main(void)
//{
//	char	*str1 = "abcdefghijk";
//	char	*str2 = "abcdefgh1jk";
//	char	*str3 = "abcdeFghijk";
//	char	*str4 = "abcdefg\tjk";
//	char	*str5 = "";
//
//	printf("\n\nres 1: %d\n", ft_str_is_lowercase(str1));
//	printf("res 2: %d\n", ft_str_is_lowercase(str2));
//	printf("res 3: %d\n", ft_str_is_lowercase(str3));
//	printf("res 4: %d\n", ft_str_is_lowercase(str4));
//	printf("res 5: %d\n\n", ft_str_is_lowercase(str5));
//	return (0);
//}
