/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:21:50 by bmilford          #+#    #+#             */
/*   Updated: 2024/04/24 16:52:34 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	 main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;

	a = ft_printf(" %d\n", 10);
	b = printf(" %d\n", 10);
	printf( "%d%d\n", a,b);
	c = ft_printf(" %d\n", -1);
	d = printf(" %d\n", -1);
	printf("%d%d\n", c,d);
	e =ft_printf("%d", -99);
	f = printf("%d", -99);
	printf("%d%d\n", e,f);
	g =ft_printf(" %d\n", 100);
	h =printf(" %d\n", 100);
	printf("%d%d\n", g,h);
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
