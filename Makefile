# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/27 15:13:43 by jodufour          #+#    #+#              #
#    Updated: 2021/03/28 05:13:35 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	bsq
CC		=	gcc -c -o
LINKER	=	gcc -o
RM		=	rm -rf
MAKEDIR	=	mkdir -p

INCLUDE	=	includes
SRCD	=	srcs/
OBJD	=	objs/

DEBUG	=	false

SRCS	=	\
			bsq.c				\
			min.c				\
			main.c				\
			get_fd.c			\
			err_msg.c			\
			check_map.c			\
			print_res.c			\
			ft_putstr.c			\
			ft_putnbr.c			\
			ft_strdup.c			\
			ft_strlen.c			\
			ft_strjoin.c		\
			ft_putlnbr.c		\
			ft_putchar.c		\
			ft_putendl.c		\
			ft_isdigit.c		\
			multi_free.c		\
			get_matrix.c		\
			get_content.c		\
			malloc_buff.c		\
			is_meta_char.c		\
			print_matrix.c		\
			malloc_matrix.c		\
			get_meta_chars.c	\
			transform_matrix.c	\
			check_meta_chars.c

OBJS	:=	${SRCS:.c=.o}
OBJS	:=	${addprefix ${OBJD}, ${OBJS}}

CFLAGS	=	-Wall -Wextra -I ${INCLUDE}

ifeq (${DEBUG},true)
	CFLAGS += -g
endif

all:	${NAME}

${NAME}:	${OBJS}
	${LINKER} ${NAME} ${OBJS}

${OBJD}%.o:	${SRCD}%.c
	${MAKEDIR} ${OBJD}
	${CC} $@ ${CFLAGS} $^

clean:
	${RM} ${OBJD}

fclean:
	${RM} ${OBJD} ${NAME}

re:	fclean all

.PHONY:	all, clean, fclean, re
