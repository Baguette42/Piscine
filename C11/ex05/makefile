# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nle-gall <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/22 20:32:03 by nle-gall          #+#    #+#              #
#    Updated: 2021/07/22 20:46:38 by nle-gall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = do-op
SRCS = $(wildcard *.c)
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
CC = gcc
RM = rm -f
INCLUDES = ft_o.h

.c.o:
	${CC} ${CFLAGS} -c -I ${INCLUDES} $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
