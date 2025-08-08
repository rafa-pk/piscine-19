/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:47:20 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/06 12:39:19 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
		return (1);
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

//int	main(void)
//{
//	char	*str1 = "x08734ycx32z=";
//	char	*str2 = " -3948yr 	\n";
//	char	*str3 = "";
//	char	*str4 = "	";
//
//	printf("\n\nres 1: %d\n", ft_str_is_printable(str1));
//	printf("res 2: %d\n", ft_str_is_printable(str2));
//	printf("res 3: %d\n", ft_str_is_printable(str3));
//	printf("res 4: %d\n\n", ft_str_is_printable(str4));
//	return (0);
//}
