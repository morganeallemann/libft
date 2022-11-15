# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malleman <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 14:45:26 by malleman          #+#    #+#              #
#    Updated: 2022/11/15 14:48:52 by malleman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = basic_function.c

OBJS = ${SRCS:.c=.o}

CC	 = gcc

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS} 

all: 	${NAME}

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re: 	fclean all

bonus:	${OBJS}
			ar rcs ${NAME} ${OBJS}

.PHONY: all clean fclean re
