/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 12:03:23 by matmarti          #+#    #+#             */
/*   Updated: 2020/09/09 12:05:42 by matmarti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < (size / 2))
	{
		j = ((size - i) - 1);
		ft_swap(&tab[i], &tab[j]);
		i++;
	}
}
