#ifndef __FUNCTION_H__
# define __FUNCTION_H__

int	my_printf(char* str, ...);
void	my_printf_s(va_list list);
void	my_printf_i(va_list list);
void	my_printf_d(va_list list);
void	my_printf_c(va_list list);
void	ptr(va_list list, char c);
void	my_printf_o(va_list list);
void	octal(int n);
void	my_printf_u(va_list list);
void	hex(int n, char *taille);
void	my_printf_x(va_list list);
void	my_printf_X(va_list list);
void	my_printf_modulo(va_list list);

#endif
