/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin42@4.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 10:59:32 by matmarti          #+#    #+#             */
/*   Updated: 2020/09/13 16:10:57 by matmarti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_in_hexa(char c)
{
	char				*hex;
	unsigned	char	u_c;

	u_c = c;
	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[u_c / 16]);
	ft_putchar(hex[u_c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 31) || str[i] == 127)
			ft_put_in_hexa(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
