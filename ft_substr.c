/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:30:51 by marcgar2          #+#    #+#             */
/*   Updated: 2024/09/27 14:40:55 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	real_len;

	real_len = ft_strlen(s);
	str = NULL;
	i = 0;

	if (!s || (!(str = malloc(len + 1))))
		return (NULL);
	if (start > real_len)
		return (ft_strdup(""));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char *str;
	char *substr;
	
	str = malloc(20);
	strcpy(str, "putos vecinos");
	substr = ft_substr(str, 5, 7);
	printf("Resultado de substring -> %s\n", substr);
	free(str);
	return (0);
}