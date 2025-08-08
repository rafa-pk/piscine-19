/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:22:01 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/06 16:19:32 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (flag && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!flag && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}

//int	main(void)
//{
//	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";
//
//	printf("\n\nstr before: %s\n", str);
//	printf("str after: %s\n\n", ft_strcapitalize(str));
//	return (0);
//}
