# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mprevot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/01 11:18:53 by mprevot           #+#    #+#              #
#    Updated: 2017/02/24 17:54:48 by mprevot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=gcc

CFLAGS=-g -Wall -Wextra -Werror

RM=rm -f

SRC= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_strstr.c ft_strcmp.c ft_strnstr.c \
ft_atoi.c ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c \
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_memalloc.c ft_memdel.c \
ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c \
ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar.c ft_putendl.c \
ft_putnbr.c ft_putstr.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_swap.c ft_cat.c ft_factorial.c \
ft_foreach.c ft_range.c ft_gnl.c \
ft_printf.c ft_printf_putstr.c ft_printf_readarg.c ft_unicode2utf8.c ft_printf_putnbr_signed.c \
ft_intcpy.c ft_unicodedup.c ft_unicodelen.c ft_printf_execarg0.c ft_printf_putnbr_unsigned.c \
ft_printf_execarg1.c ft_printf_execarg2.c ft_printf_putnbr_signed_args.c ft_printf_putnbr_unsigned_args.c \
ft_printf_putstr_args.c ft_isascii_str.c ft_isunicode.c ft_isunicode_str.c ft_printf_tools.c \
ft_intdup.c ft_intlst_issorted.c ft_lstadd_end.c ft_lstcpy.c ft_lstlen.c \
ft_lstrotate.c ft_lstrotate_reverse.c ft_lstsort.c ft_lstsort_rev.c \
ft_intlen.c ft_isdigit_str.c ft_lstlast.c ft_strjoin_multi.c

OBJ=$(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
