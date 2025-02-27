/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:48:26 by bmilford          #+#    #+#             */
/*   Updated: 2024/04/24 14:15:38 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

int		checkcase(char cases, va_list args);
int		ft_putptr_fd(size_t n, int fd);
int		ft_printf(const char *format, ...);
