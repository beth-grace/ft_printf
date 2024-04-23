/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:42:23 by bmilford          #+#    #+#             */
/*   Updated: 2024/04/23 16:48:49 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *format, ...)
{
	va_list args;
	int		index;

	index = 0;
	va_start(args, format);
	while (format[index])
	{
		if (format[index] == '%')
			checkcase(format[++index], args);
		else
			write(1, format + index, 1);
		index++;
	}
	va_end(args);
	return (1);
}

void	checkcase(char cases, va_list args)
{
	if (cases == '%')
		ft_putchar_fd('%', 1);
	else if (cases == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (cases == 's')
		ft_putstr_fd(va_arg(args, char*), 1);
	else if (cases == 'p')
		ft_putptr_fd(va_arg(args, size_t), 1);
	else if (cases == 'd')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (cases == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (cases == 'u')
		ft_putunbr_fd(va_arg(args, unsigned int), 1);
	else if (cases == 'x')
		ft_puthex_fd(va_arg(args, unsigned int),
			"0123456789abcdef", 1);
	else if (cases == 'X')
		ft_puthex_fd(va_arg(args, unsigned int),
			"0123456789ABCDEF", 1);
}

int	ft_putptr_fd(size_t n, int fd)
{
	int	t;

	t = ft_putstr_fd("0x", fd);
	t += ft_puthex_fd(n, "0123456789ABCDEF", fd);
	return (t);
}
