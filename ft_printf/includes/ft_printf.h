/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:14:21 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/23 15:22:09 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include "../../libft.h"

#define INT  "0123456789"
#define HEXL "0123456789abcdef"
#define HEXH "0123456789ABCDEF"

int	ft_printf(const char *s, ...);
int	ft_printf_char(int c);
int	ft_printf_str(char *s);
int	ft_printf_int(int n);
int	ft_printf_ubase(unsigned int n, char *base);
int	ft_printf_ptr(size_t n);
