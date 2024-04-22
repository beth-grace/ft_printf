/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:42:23 by bmilford          #+#    #+#             */
/*   Updated: 2024/04/22 17:35:18 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdargs.h>
#include "libft"
int	ft_printf(const char num_args, ...)
{
	va_list args;
	int		index;

	index = 0;
	va_start (args, num_args);
	while (index < num_args)
		index++;
}
void	checkcase(char cases, va_list args)
	int	num_args = (ft_strlen(cases) / 2)
	int	index;

	index = 0;
	while (cases)
	{
		if (cases[index] == '%' && cases[index + 1] == '%')
			ft_putchar_fd('%')
		else if (cases[index] == '%' && cases[index + 1] == 'c')
			ft_putchar_fd(va_arg(args, int));
		else if (cases[index] == '%' && cases[index + 1] == 's')
			ft_putstr_fd(va_arg(args, char*));
		else if (cases[index] == '%' && cases[index + 1] == 'p')
			write(fd,va_arg(args, unsigned long int), ft_putnbr(args));
		else if (cases[index] == '%' && cases[index + 1] == 'd')
			ft_putnbr_fd(va_arg(args, int));
		else if (cases[index] == '%' && cases[index + 1] == 'i')
		{
		}
		else if (cases[index] == '%' && cases[index + 1] == 'u')
			ft_putnbr_fd(va_args(args, unsigned int));
		else if (cases[index] == '%' && cases[index + 1] == 'x')
		{
		}
		else if (cases[index] == '%' && cases[index + 1] == 'X')
		{
		}
		index++;
	}

