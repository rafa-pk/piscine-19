#include <stdlib.h>
#include <unistd.h>

 typedef struct  s_stock_str
  {
      int     size;
      char    *str;
      char    *copy;
  }   t_stock_str; 

int ft_strlen(char *str)
 {
     int i;
 
     i = 0;
     while (str[i])
         i++;
     return (i);
 }
 
 char    *ft_strdup(char *str)
 {
     int     i;
     char    *dup;
 
     i = 0;
     dup = malloc(sizeof(char) * ft_strlen(str) + 1);
     while (str[i])
     {
         dup[i] = str[i];
         i++;
     }
     dup[i] = '\0';
     return (dup);
 }
 
 struct s_stock_str  *ft_strs_to_tab(int ac, char **av)
 {
     int               i;
     t_stock_str  *array;
 
     i = 0;
     array = malloc(sizeof(struct s_stock_str) * (ac + 1));
     if (!array)
     {
         free(array);
         return (NULL);
     }
     while (i < ac)
     {
         array[i].size = ft_strlen(av[i]);
         array[i].str = av[i];
         array[i].copy = ft_strdup(av[i]);
         i++;
     }
     array[ac].size = 0;
     array[ac].str = NULL;
     array[ac].copy = NULL;
     return (array);
}
 
  void    ft_putchar(char c)
  {
      write(1, &c, 1);
  }
  
  void    ft_putnbr(int nb)
  {
      long int    bnb;
  
      bnb = nb;
      if (bnb < 0)
      {
          ft_putchar('-');
          bnb = -bnb;
      }
      if (bnb >= 10)
      {
          ft_putnbr(bnb / 10);
          ft_putnbr(bnb % 10);
      }
      else
          ft_putchar(bnb + '0');
      ft_putchar('\n');
  }
  
  void    ft_putstr(char  *str)
  {
      int i;
  
      i = 0;
      while (str[i])
      {
          ft_putchar(str[i]);
          i++;
      }
	ft_putchar('\n');
  }
  
  void    ft_show_tab(struct s_stock_str *par)
  {
      int i;
  
      i = 0;
      while (par[i].str != NULL)
      {
          ft_putnbr(par[i].size);
          ft_putstr(par[i].str);
          ft_putstr(par[i].copy);
          i++;
      }
  }

int	main(void)
{
	int	i = 0;
	char	*test_arr[] = {"Hello", "World", "Piscine"};
	t_stock_str	*test_s_arr = ft_strs_to_tab(3, test_arr);

	ft_show_tab(test_s_arr);
	while (i < 3)
	{
		free(test_s_arr[i].copy);
		i++;
	}
	free(test_s_arr);
	return (0);
}
