/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 07:43:41 by marcgar2          #+#    #+#             */
/*   Updated: 2024/10/03 08:14:59 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
    int i;
	int tmp;
	
	i = 0;
	if (n == 0)
		return (1); // Needs at least '0' char
	if (n == -2147483648)
		return (11); // Returns the minimum number
	if (n < 0)
	{
		n *= -n; // Multiplies by -1 the sign
		i++;
	}
	tmp = a;
	while (tmp > 0) // while the temporary var is bigger than 0
	{
		tmp = tmp / 10; // Divides the number between 10, to get the first digit
		i++;
	}
	return (i);
}

static int	exp_calc(int n)
{
	int	a;
	int	exp;

	a = 0;
	if (n == 0)
		return (1); // If the number is 0 the exp is 1
	if (n == -2147483648)
		return (1000000000); // If it's the minimum number it returns a number in base 10^9
	exp = digit_count(n); // How many digits have the number using the last function
	a = 1 // Min. base 1
	while (n < 0)
		--digits;
	while (--exp)
		a = a * 10 // Calculating the base of the power of 10
	return (exp);
	
}