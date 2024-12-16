/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:30:36 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/16 19:57:26 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_printmemory(unsigned long address, int *count);
void	ft_putint(int n, int *count);
void	ft_putuint(unsigned int n, int *count);
void	ft_printhex(unsigned int n, int *count, char c);
int		ft_printf(const char *text, ...);

#endif
