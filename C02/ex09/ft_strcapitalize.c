/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 10:58:43 by matmarti          #+#    #+#             */
/*   Updated: 2020/09/13 16:04:24 by matmarti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_lowercase(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		if (src[i] >= 'A' && src[i] <= 'Z')
			src[i] = src[i] + 32;
		i++;
	}
}

int		ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int verif;

	i = 0;
	verif = 1;
	ft_lowercase(str);
	while (str[i])
	{
		if (!(ft_is_alpha(str[i])))
			verif = 1;
		else if (verif == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			verif = 0;
		}
		i++;
	}
	return (str);
}
