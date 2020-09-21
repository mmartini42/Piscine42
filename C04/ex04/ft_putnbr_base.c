/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:17:29 by matmarti          #+#    #+#             */
/*   Updated: 2020/09/16 17:18:39 by matmarti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && j != i)
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int					len_base;
	unsigned long int	l_nbr;

	l_nbr = nbr;
	len_base = ft_strlen(base);
	if (ft_check_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		l_nbr *= -1;
	}
	if (l_nbr / len_base > 0)
		ft_putnbr_base(l_nbr / len_base, base);
	ft_putchar(base[l_nbr % len_base]);
}
