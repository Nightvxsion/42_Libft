/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:02:45 by marcgar2          #+#    #+#             */
/*   Updated: 2024/09/27 22:26:39 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str1;
	size_t	i;
	size_t	len;

	i = 0;
	str1 = NULL;
	len = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i])) // Encuentra la primera coincidencia dentro de set
		i++;
	while (len > 0 && ft_strchr(set, s1[len - 1])) // Encuentra la ultima coincidencia recorriendo desde el final
		len--;
	str1 = ft_substr(s1, i, len - i); // Imprime lo que tiene como diferencia entre i y len que seria hola mundo con los caracteres trimeados
	return (str1);
}

int	main(void)
{
	char	*total;

	total = ft_strtrim("   ***Hola Mundo***   ", " *");
	printf("resultado total del trim -> %s\n", total);
	free(total);
	return (0);
}