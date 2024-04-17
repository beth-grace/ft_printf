/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:35:22 by bmilford          #+#    #+#             */
/*   Updated: 2024/04/17 16:14:54 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	read(char string)
{
	int	index;
	
	index = 0;
	while(string)
	{
		if (string[index] == %)
			return(check_case(index, string));
		index++;
	}
	return (0);
}
