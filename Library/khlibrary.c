/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   khlibrary.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:35:35 by khirsig           #+#    #+#             */
/*   Updated: 2021/02/03 10:25:32 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_talking(char c[50])
{
	int index;

	index = 0;
	while (c[index] != '\0')
	{
		write(1, &c[index], 1);
		index++;
	}
}

int		main(void)
{
	ft_talking("My name is Kevin.\n");
	return (0);
}
