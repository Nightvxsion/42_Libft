/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:30:51 by marcgar2          #+#    #+#             */
/*   Updated: 2024/09/26 20:56:25 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	real_len;

	real_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	if (real_len > len)
		len = real_len;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
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