/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:21:50 by bmilford          #+#    #+#             */
/*   Updated: 2024/04/24 15:08:07 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	 main()
{
	ft_printf(" %d\n", -1);
	printf(" %d\n", -1);
	ft_printf(" %d\n", -9);
	printf(" %d\n", -9);
	ft_printf(" %d\n", -99);
	printf(" %d\n", -99 );
	ft_printf(" %d\n", LONG_MAX);
	printf(" %d\n", LONG_MAX);
	ft_printf(" %d\n", ULONG_MAX );
	printf(" %d\n", ULONG_MAX);
	ft_printf(" %d\n", UINT_MAX);
	printf(" %d\n", UINT_MAX);
	ft_printf(" %d\n", 475893793473975483LL);
	printf(" %d\n", 475893793473975483LL);
	ft_printf(" %i\n", -1);
	printf(" %i\n", -1);
	ft_printf(" %i\n", -9);
	printf(" %i\n", -9);
}
