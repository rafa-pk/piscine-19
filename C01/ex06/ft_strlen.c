/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:59:01 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/05 15:04:28 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//int	main(void)
//{
//	char	*str = "ya 23 chars dans ce str";
//	printf("str: %s\n\n len: %d\n", str, ft_strlen(str));
//	return (0);
//}
