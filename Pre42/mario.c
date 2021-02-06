/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mario.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:33:34 by khirsig           #+#    #+#             */
/*   Updated: 2021/02/05 11:55:56 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

void	ft_printhash(int index, int innerindex)
{
	while (index >= innerindex)
	{
		ft_talking("#");
		innerindex++;
	}
}

void	ft_printspace(int innerindex)
{
	while (innerindex != 0)
	{
		ft_talking(" ");
		innerindex--;
	}
}

int		main(void)
{
	int height;
	int index;
	int innerindex;

	index = 0;
	while (height <= 0)
	{
		ft_talking("Height: ");
		scanf("%i", &height);
	}
	innerindex = height - 1;
	while (index < height)
	{
		ft_printspace(innerindex);
		innerindex = 0;
		ft_printhash(index, innerindex);
		ft_talking("  ");
		innerindex = 0;
		ft_printhash(index, innerindex);
		ft_talking("\n");
		index++;
		innerindex = height - index - 1;
	}
}
