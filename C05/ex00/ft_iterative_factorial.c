/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 14:32:19 by matmarti          #+#    #+#             */
/*   Updated: 2020/09/20 19:31:23 by matmarti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int temp;

	i = 1;
	temp = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i < temp)
	{
		nb *= i;
		i++;
	}
	return (nb);
}
