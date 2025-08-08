/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:46:56 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/06 17:59:51 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define HEX_LC "0123456789abcdef"

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		if (is_printable(str[i]))
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			c = (unsigned char)str[i];
			write(1, &HEX_LC[c / 16], 1);
			write(1, &HEX_LC[c % 16], 1);
		}
		i++;
	}
}

//int	main(void)
//{
//	char	str[] = "Hello\nHow are you?";
//
//	printf("\n\nstr before: \n%s\n\n", str);
//	printf("str after: \n");
//	ft_putstr_non_printable(str);
//	printf("\n\n");
//	return (0);
//}
