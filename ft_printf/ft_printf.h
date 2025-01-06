/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:30:36 by kyungkim          #+#    #+#             */
/*   Updated: 2025/01/06 15:57:35 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_puthex(unsigned long address, int *count, char c);
void	ft_putnbr(long n, int *count);
__attribute__((format(printf, 1, 2)))
int		ft_printf(const char *text, ...);

#endif
