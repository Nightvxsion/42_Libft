/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:20:14 by marcgar2          #+#    #+#             */
/*   Updated: 2024/09/21 20:20:10 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/*int	main(void)
{
	char	*str;
	char	c;
	char	*found;

	c = 'o';
	str = malloc(13);
	strcpy(str, "hola buenas");
	found = ft_strchr(str, c);
	if (found != NULL)
		printf ("FOUND %c IN %s\n", c, str);
	else
		printf ("ERR\n");
	return (0);
}*/
