/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:05:40 by marcgar2          #+#    #+#             */
/*   Updated: 2024/09/21 20:21:27 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*found_char = NULL;

	while (*s != '\0')
	{
		if (*s == (char)c)
			found_char = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)found_char);
}

/*int	main(void)
{
	char	*str;
	char	c;
	char	*found;

	str = malloc(20);
	c = 'u';
	strcpy(str, "hola buenas");
	found = ft_strrchr(str, c);
	if (found != NULL)
		printf("FOUND %s IN %s\n", found, str);
	else
		printf("ERR\n");
	free(str);
	return (0);
}*/
