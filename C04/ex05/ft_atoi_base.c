/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:40:15 by matmarti          #+#    #+#             */
/*   Updated: 2020/09/16 13:56:29 by matmarti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
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
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int		ft_convert_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != c)
	{
		i++;
	}
	return (i);
}

int		ft_char_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int len;
	int neg;
	int result;

	i = 0;
	neg = 1;
	result = 0;
	len = ft_check_base(base);
	if (ft_check_base(base) == 0)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] && ft_char_in_base(str[i], base) == 1)
	{
		result = result * len + ft_convert_base(str[i], base);
		i++;
	}
	return (result * neg);
}
