/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <ctype.h>

static int ft_strlen(char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i; // Always return the exact length    
}

static char to_upper(unsigned int index, char c)
{
    if(islower(c))
        return (c - 32);
    return c;
}

char *ft_strmapi(char *s, char (*f)(unsigned int, char))
{
    int  i;
    char *str;
    int  len;
    
    i = 0;
    if (!s || !str)
        return (NULL);
    len = ft_strlen(s);
    str = malloc(sizeof(char) * (len + 1));
    while (i < len)
    {
        str[i] = f(i, s[i]); // Appies the function to each element and string independently
        i++;
    }
    str[len] = '\0';
    return (str);
}

int main(void)
{
    char *str;
    char *res;

    str = malloc(25);
    strcpy(str, "today is my birthday");
    res = ft_strmapi(str, to_upper);
    if (res)
    {
        printf("Original string -> %s\n", str);
        printf("Modified string -> %s\n", res);
        free(res);
    }
    else
        printf("Algo has hecho mal broder :c\n");
    free(str);
    return 0;
}