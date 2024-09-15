/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:59:56 by ashirzad          #+#    #+#             */
/*   Updated: 2024/02/19 10:20:57 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoi(char *str)
{
	long long	result;
	int			i;
	int			neg_count;

	result = 0;
	neg_count = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || \
		str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg_count = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (neg_count != 0)
			result = result * 10 + (str[i] - 48) * -1;
		else
			result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result);
}
