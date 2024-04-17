/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:09:13 by bmilford          #+#    #+#             */
/*   Updated: 2024/04/17 16:44:08 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_case(int index, char string, char out)
{
	if (index + 1 == '%')
		write(1, '%', 1);
	else if (index + 1 == 'c')
		write(1, out, 1);
	else if (index + 1 == 's')
		write(1, out, ft_strlen(out));
	else if (index ++ 1 == 'p')
		write(1,ft_atoi(out), ft_strlen(out));
	else
		return 0;
}
