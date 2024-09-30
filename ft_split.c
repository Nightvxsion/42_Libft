/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:53:27 by marcgar2          #+#    #+#             */
/*   Updated: 2024/09/30 22:53:27 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_on_str(char const *s1, int c)
{
	int	i; // Reading the string
	int	j; // We're inside the string or not

	i = 0;
	j = 0;
	if (s1[i] == '\0')
		return (0);
	while (s1[i] != '\0')
	{
		if (*s1 == c) // If WE'RE OUTSIDE the string
			j = 0;
		else if (j == 0) // If WE'RE inside the string
		{
			j = 1;
			i++;
		}
		s1++;
	}
	return (i);
}

static int	total_length(char const *s1, char c, int n)
{
	int	len; // Total length

	len = 0;
	while (s1[n] != c && s1[n] != '\0')
	{
		len++; // Increase length 
		n++; // Next character
	}
	return (len);
}

static int	**rm_arr(char const **s1, int j)
{
	while (j > 0) // 'j' are the elements inside the arr
	{
		j--;
		free((void *)s1[j]); // Removes the elements inside
	}
	free(s1); // Removes the arr itself
	return (NULL);
}

static char	**jordi(char *s1, char **s, char c, int n)
{
	int	i; // Just reads the string
	int	j; // Indicates in which position (array) on the "str" passed is.
	int	k; // Element on the array

	i = 0;
	j = 0;
	while(s1[i] != '\0' && j < n)
	{
		if (s1[i] == c) // If detects delim, it skips
			i++;
		if (s1[i] == '\0')
			break;
		s[j] = (char *)malloc(sizeof(char) * (total_length(s1, c, i) + 1)); // Allocates memory casting the malloc and with total len, calcs the length
		if (s[j] == NULL)
			return rm_arr(s, j); // If smth's created, it removes it
		k = 0;
		while (s1[i] != '\0' && s1[i] != c)
			s[j][k++] = s1[i++]; // Copying the characters
		s[j][k] = '\0';
		j++;
	}
	s[j] = NULL;
	return s;
}

char	**ft_split(char const *s, char c)
{
	char	**destino; // Final string
	int	n; // Number of substrings

	if (s == NULL)
		return (NULL);
	n = is_on_str(s, c);
	destino = (char **)malloc(sizeof(char *) * (n + 1));
	if (destino == NULL)
		return (NULL);
	return jordi(s, destino, c, n);
}

int	main(void)
{
	char **arr;
	char *str = "me cago en cristo";
	char delim = ' ';

	// Llamamos a ft_split con la cadena y el delimitador
	arr = ft_split(str, delim);
	// Imprimir subcadenas resultantes
	if (arr)
	{
		int i = 0;
		while (arr[i] != NULL)
		{
			printf("Subcadena [%d]: %s\n", i, arr[i]);
			free(arr[i]); // Liberar cada subcadena
			i++;
		}
		free(arr); // Liberar el arreglo de punteros
	}
	else
		printf("Error al dividir la cadena.\n");
	return 0;
}