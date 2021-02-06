/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 11:16:16 by khirsig           #+#    #+#             */
/*   Updated: 2021/02/06 13:34:23 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	float cash_value[15];
	int cash_amount[15];
	float cost_of_goods;
	float money_paid;
	float cash_back;
	int index;
	
	cash_value[0] = 0.01;
	cash_value[1] = 0.02;
	cash_value[2] = 0.05;
	cash_value[3] = 0.10;
	cash_value[4] = 0.20;
	cash_value[5] = 0.50;
	cash_value[6] = 1.00;
	cash_value[7] = 2.00;
	cash_value[8] = 5.00;
	cash_value[9] = 10.00;
	cash_value[10] = 20.00;
	cash_value[11] = 50.00;
	cash_value[12] = 100.00;
	cash_value[13] = 200.00;
	cash_value[14] = 500.00;
	index = 14;
	while (index >= 0)
	{
		cash_amount[index] = 0;
		index--;
	}
	printf("How much do the goods cost?\n");
	scanf("%fd", &cost_of_goods);
	while (money_paid < cost_of_goods)
	{
		printf("How much money was used for paying?\n");
		scanf("%fd", &money_paid);
	}
	cash_back = money_paid - cost_of_goods;
	while (cash_back > 0)
	{
		//printf("%f\n", cash_back);
		index = 14;
		while (index >= 0)
		{
			//printf("%f <= %f\n", cash_value[index], cash_back);
			if (cash_value[index] <= cash_back)
			{
				//printf("Test5\n");
				cash_back -= cash_value[index];
				cash_amount[index]++;
			}
			index--;
		}
	}
	printf("As change you have to give out:");
	index = 14;
	while (index != -1)
	{
		if (index >= 6 && cash_amount[index] > 0)
		{
			printf(" %i time(s) %g€", cash_amount[index], cash_value[index]);
		}
		if (index <= 6 && cash_amount[index] > 0)
		{
			printf(" %i time(s) %g¢", cash_amount[index], cash_value[index]);
		}
		index--;
	}
	printf("\n");
	return (0);
}