/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annavm <annavm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:07:37 by annavm            #+#    #+#             */
/*   Updated: 2024/04/27 18:07:38 by annavm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char *str;
	char *alloc;

	str = "hello world";
	alloc = ft_strdup(str);
	printf("%s\n",alloc);
}
*/
