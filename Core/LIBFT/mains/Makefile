# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmarek <bmarek@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 15:26:23 by bmarek            #+#    #+#              #
#    Updated: 2023/11/23 07:50:16 by bmarek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=gcc

CFLAGS=-Werror -Wextra -Wall

DEPS = libft.h

SRCS = ft_atoi.c \
		ft_itoa.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		
#macro to replace .c in SRCS with .o for OBJS
OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

#compilation line for library name and files
$(NAME): $(OBJS)
	@ar r $(NAME) $(OBJS) 

#clean create OBJS file
clean: 
	rm -f $(OBJS)

#clean created compiled file
fclean: clean
	rm -f $(NAME)

# clean everything and redo the compilation
re: fclean all