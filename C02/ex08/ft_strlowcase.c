/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:14:52 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/06 15:20:55 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

//int	main(void)
//{
//	char	str[] = "FFFFFTttT_&)strrLOWcase#	";
//
//	printf("\n\nstr before: %s\n", str);
//	printf("str after: %s\n\n", ft_strlowcase(str));
//	return (0);
//}
