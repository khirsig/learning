/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   credit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:36:07 by khirsig           #+#    #+#             */
/*   Updated: 2021/02/05 09:36:53 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <khlibrary.c>

long	ft_getdigits(long cardnumber)
{
	long twodigits;

	twodigits = cardnumber;
	while (twodigits > 100)
	{
		twodigits /= 10;
	}
	return (twodigits);
}

int		ft_cardtype(long twodigits)
{
	int cardtype;

	if (twodigits <= 49 && twodigits >= 40)
	{
		cardtype = 0;
	}
	else if (twodigits >= 51 && twodigits <= 55)
	{
		cardtype = 1;
	}
	else if (twodigits == 34 || twodigits == 37)
	{
		cardtype = 2;
	}
	else
	{
		cardtype = 3;
	}
	return (cardtype);
}

int		ft_cardlength(long cardnumber)
{
	if (cardnumber >= 1000000000000000)
	{
		return (15);
	}
	if (cardnumber >= 100000000000000)
	{
		return (14);
	}
	if (cardnumber >= 10000000000000)
	{
		return (13);
	}
	if (cardnumber >= 1000000000000)
	{
		return (12);
	}
	else
	{
		return (1);
	}
}

int		main(void)
{
	long cardnumber;
	long twodigits;
	long cardnumberseperation;
	int cardtype;
	int cardlengtharray;
	int singlenumber[cardlengtharray = ft_cardlength(cardnumber)];
	int index;
	int validation;
	int validationmath;

	index = 0;
	printf("Card number: ");
	scanf("%ld", &cardnumber);
	twodigits = ft_getdigits(cardnumber);
	cardtype = ft_cardtype(twodigits);
	cardlengtharray = ft_cardlength(cardnumber);
	cardnumberseperation = cardnumber;
	while (cardnumberseperation)
	{
		singlenumber[index] = cardnumberseperation % 10;
		cardnumberseperation /= 10;
		index++;
	}
	index = 1;
	validation = 0;
	validationmath = 0;
	while (index <= cardlengtharray)
	{
		validationmath = singlenumber[index] * 2;
		if (validationmath > 9)
		{
			validationmath -= 10;
			validation += validationmath + 1;
		}
		else
		{
			validation += validationmath;
		}
		index += 2;
	}
	index = 0;
	while (index <= cardlengtharray)
	{
		validation += singlenumber[index];
		index += 2;
	}
	if (validation % 10 == 0 && cardtype == 0)
	{
		printf("Credit Card Number: %ld\nVISA\n", cardnumber);
	}
	else if (validation % 10 == 0 && cardtype == 1)
	{
		printf("Credit Card Number: %ld\nMasterCard\n", cardnumber);
	}
	else if (validation % 10 == 0 && cardtype == 2)
	{
		printf("Credit Card Number: %ld\nAmerican Express\n", cardnumber);
	}
	else if (validation % 10 != 0 || cardtype == 3)
	{
		printf("Credit Card Number: %ld\nINVALID\n", cardnumber);
	}
}
