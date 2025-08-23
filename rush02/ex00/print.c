/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 14:03:33 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/23 17:32:27 by cdouny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include "dict.h"
typedef struct s_entry
{
    char *num;
    char *num_str;
} t_entry;
//char	dict_nmb()
void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	printnmb(char **av, t_entry *entry)
{
	int	i;
	//char	*nmb;

	i = 0;
	while (entry[i].num != NULL)
	{
		if (ft_strcmp(av[1], entry[i].num) == 0)
		{
			ft_putstr(entry[i].num_str);
			write(1, "if", 2);
		}
		i++;
	}
}

int	main(int ac,char *av[])
{
	int i;
	t_entry entry[4]; // ou autre taille adaptée

	entry[0].num = "1";
	entry[0].num_str = "one";
	entry[1].num = "2";
	entry[1].num_str = "two";
	entry[2].num = "3";
	entry[2].num_str = "three";
	entry[3].num = NULL;
	entry[3].num_str = NULL;

	i = 0;
	(void)ac;
	printnmb(av, entry);

	return (0);	
	
}
