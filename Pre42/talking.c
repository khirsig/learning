/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   talking.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 22:13:11 by khirsig           #+#    #+#             */
/*   Updated: 2021/02/04 14:12:58 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_talking(char text[50])
{
	int index;

	index = 0;
	while (text[index] != '\0')
	{
		write(1, &text[index], 1);
		index++;
	}
}

int		main(void)
{
	ft_talking("My name is Kevin.\n");
	return (0);
}
