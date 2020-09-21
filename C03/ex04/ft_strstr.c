/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 10:34:31 by matmarti          #+#    #+#             */
/*   Updated: 2020/09/15 16:57:55 by matmarti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	if (to_find[0] != '\0' && str[0] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] == to_find[j])
				j++;
			else
				j = 0;
			if (j == ft_strlen(to_find))
				return (&str[i - j + 1]);
			i++;
		}
	}
	return (0);
}
