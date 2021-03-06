/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xtang.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 11:30:48 by xtang             #+#    #+#             */
/*   Updated: 2020/05/06 02:22:04 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ie_except_after_c(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'e')
		{
/* 'e' appears at the first position */
			if (i == 0)
			{
				if (str[i + 1] != '\0' && str[1] == 'i')
					return (0);
			}
/* 'e' appears at the second position */
			else if (i == 1)
			{
				if (str[i + 1] != '\0' && str[0] != 'c' && str[2] == 'i')
					return (0);
			}
			else
			{
/* Default return 1. If they are 'c', 'i' and 'e', it returns 0 */
				if (str[i - 2] == 'c' && str[i - 1] == 'i')
					return (0);
/* Default return 1. If they are  no'c', 'e' and 'i', it return 0 */
				if (str[i + 1] != '\0' && str[i - 1] != 'c' && str[i + 1] == 'i')
					return (0);
			}
			return (1);
		}
		i++;
	}
	return (1);
}
