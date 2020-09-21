/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 11:12:56 by matmarti          #+#    #+#             */
/*   Updated: 2020/09/09 11:13:03 by matmarti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = '0' - 1;
	while (++i <= '7')
	{
		j = i;
		while (++j <= '8')
		{
			k = j;
			while (++k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i != '7')
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}
