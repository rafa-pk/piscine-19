/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:58:34 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/06 15:14:16 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

//int	main(void)
//{
//	char	str[] = "fT_STRuuuuuupp/tCase";
//
//	printf("\n\nstr before: %s\n", str);
//	printf("str after: %s\n\n", ft_strupcase(str));
//	return (0);
//}
