# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 16:34:11 by chabrune          #+#    #+#              #
#    Updated: 2023/01/24 23:51:29 by chabrune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



#######################################################
###### ARGUMENTS

NAME    	=       push_swap
CFLAGS  	=       -Wextra -Wall -Werror -g3
CC      	=       gcc
RM      	=       rm -rf
FT_PRINTF 	=		"../ft_printf/libftprintf.a"
OBJS    	=       $(SRCS:.c=.o)

#######################################################
###### SOURCES

SRCS       	=	swap.c \
				utils.c \
				main.c \
				push.c \


#######################################################
###### RULES

.c.o:
			gcc ${CFLAGS} -c $< -o $(<:.c=.o)

all:		${NAME}

${NAME}:	${OBJS}
			${MAKE} -C ../ft_printf
			gcc ${CFLAGS} ${FT_PRINTF} ${OBJS} -o ${NAME}

debug:		fclean ${OBJS}
			${MAKE} -C ../ft_printf
			gcc ${CFLAGS} -fsanitize=address ${FT_PRINTF} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS}
			${MAKE} -C ../ft_printf clean

fclean:		clean
			${RM} ${NAME}
			${MAKE} -C ../ft_printf fclean

re:			fclean all

.PHONY:		all clean re fclean