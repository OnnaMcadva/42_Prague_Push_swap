/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annavm <annavm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:43:39 by annavm            #+#    #+#             */
/*   Updated: 2024/04/27 18:33:19 by annavm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/* Libc functions */
int		ft_isdigit(int c);
char	*ft_strchr(const char *s, int c);
long	ft_atoi(const char *str);

/* Additional functions */
char	**ft_split(char const *str, char c);
void	ft_putendl_fd(char *s, int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strlen(const char *str);
char	*ft_strdup(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif
