#ifndef __LIBMY_H__
# define __LIBMY_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

void	my_putchar(char c);
void	my_put_nbr(int n);
void	my_putstr(char *str);
int	my_strlen(char *str);
char	*my_strncpy(char *dest, char *src, int n);
void	my_aff_tab(char str[]);
int	my_strcmp(char *s1, char *s2);
void	my_put_nbrU(unsigned int n);

#endif
