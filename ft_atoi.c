/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:04:30 by marcgar2          #+#    #+#             */
/*   Updated: 2024/09/26 18:15:15 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] == '\r' || nptr[i] == '\t' || nptr[i] == ' '
		|| nptr[i] == '\v' || nptr[i] == '\n' || nptr[i] == '\f')
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}

int	main(void)
{
	char	*str;
	char	*str2;

	str = malloc(20);
	str2 = malloc(20);
	strcpy(str, "12\n\t34");
	strcpy(str2, "   -  123123");
	printf("ATOI result -> %d\n", ft_atoi(str));
	printf("ATOI result -> %d\n", ft_atoi(str2));
	free(str);
	free(str2);
	return (0);
}
