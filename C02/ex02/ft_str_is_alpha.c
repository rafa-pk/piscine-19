/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:09:13 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/06 11:03:14 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
		return (1);
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

//int	main(void)
//{
//	char	*str1 = "rAfaaaEEllareussi";
//	char	*str2 = "rAfaaaEElll a reussi?";
//	char	*str3 = "oh\tnon";
//	char	*str4 = "james077bond";
//	char	*str5 = "";
//
//	printf("res 1: %d\n", ft_str_is_alpha(str1));
//	printf("res 2: %d\n", ft_str_is_alpha(str2));
//	printf("res 3: %d\n", ft_str_is_alpha(str3));
//	printf("res 4: %d\n", ft_str_is_alpha(str4));
//	printf("res 5: %d\n\n", ft_str_is_alpha(str5));
//	return (0);
//}
