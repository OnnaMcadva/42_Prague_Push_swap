/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annavm <annavm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:07:31 by annavm            #+#    #+#             */
/*   Updated: 2024/04/27 18:07:32 by annavm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	symbol;
	char	*string;
	int		i;

	i = 0;
	string = (char *) s;
	symbol = c;
	while (string[i] != symbol)
	{
		if (string[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)string + i);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, World!";
    char searchChar = 'W';

    char *result = strchr(str, searchChar);
	char *result2 = ft_strchr(str, searchChar);

	if (result != NULL) {
        printf("Symbol '%c' in position %ld\n", searchChar, result - str);
        printf("Symbol '%c' in position %ld\n", searchChar, result2 - str);
    } else {
        printf("Symbol '%c' not in string\n", searchChar);
    }


    return 0;
}
*/
