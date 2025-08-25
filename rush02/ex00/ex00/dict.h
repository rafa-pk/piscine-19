/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:32:27 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/08/24 22:24:24 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFF_SIZE 30000 
# define SUCCESS 0

typedef struct s_entry
{
	int		*num;
	char	*num_str;
}	t_entry;

int		ft_isspace(char c);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		rush02(char *nbr, char *dictionary);
char	**ft_split(char *str, char *charset);
char	*ft_strdup(char *str);
void	free_all(char **table);
int		read_file(char *file, char *buff);
int		*atoiarr(char *nb);
t_entry	*parse_buff(char *buff);
void	print_large_number(char *num_str, t_entry *dict);
void	print_chunk_group(char *chunk, int index, int total, t_entry *dict);
void	extract_chunk(char *dest, char *src, int count);
void	print_hundreds(int n, t_entry *entries, int size);
char	*find_word(int val, t_entry *entries, int size);
#endif
