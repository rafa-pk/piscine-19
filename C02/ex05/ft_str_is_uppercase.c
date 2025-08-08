/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:33:24 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/06 11:46:06 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
		return (1);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

//int	main(void)
//{
//	char	*str1 = "ABCDEFGHIJK";
//	char	*str2 = "ABCDEFGH1JK";
//	char	*str3 = "ABCDeFGHIJK";
//	char	*str4 = "ABCDEFG\tJK";
//	char	*str5 = "";
//
//	printf("\n\nres 1: %d\n", ft_str_is_uppercase(str1));
//	printf("res 2: %d\n", ft_str_is_uppercase(str2));
//	printf("res 3: %d\n", ft_str_is_uppercase(str3));
//	printf("res 4: %d\n", ft_str_is_uppercase(str4));
//	printf("res 5: %d\n\n", ft_str_is_uppercase(str5));
//	return (0);
//}
