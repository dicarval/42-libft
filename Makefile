# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/29 17:05:29 by dicarval          #+#    #+#              #
#    Updated: 2024/04/29 11:44:20 by dicarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_strncmp.c ft_strnstr.c ft_atoi.c ft_itoa.c \
		ft_split.c ft_strchr.c ft_strrchr.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		ft_strncmp.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_tolower.c \
		ft_toupper.c

SRCS_B = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
		ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS	= ${SRCS:.c=.o}
OBJS_B	= ${SRCS_B:.c=.o}
RM		= rm -f
LIBC	= ar -rcs
CC		= cc
FLAGS	= -Wall -Wextra -Werror

all: ${NAME}

%.o: %.c
	${CC} ${FLAGS} -c $^ -o $@

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

bonus: ${NAME} ${OBJS_B}
	${LIBC} ${NAME} ${OBJS_B}
	touch bonus

fclean: clean
	${RM} ${NAME} $(bonus)

clean:
	${RM} ${OBJS} ${OBJS_B}

re: fclean all

.PHONY: all bonus clean fclean re .c.o
