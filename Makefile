# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chabrune <charlesbrunet51220@gmail.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 16:34:11 by chabrune          #+#    #+#              #
#    Updated: 2023/02/19 15:27:11 by chabrune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



#######################################################
###### ARGUMENTS

NAME    	=       push_swap
CFLAGS  	=       -Wextra -Wall -Werror -g3
CC      	=       gcc
RM      	=       rm -rf
FT_PRINTF 	=		"/Users/chabrune/Desktop/42-school/ft_printf/libftprintf.a"
LIBFT		=		"/Users/chabrune/Desktop/42-school/libft/libft.a"
OBJS    	=       $(SRCS:.c=.o)

#######################################################
###### SOURCES

SRCS       	=	swap.c \
				main.c \
				push.c \
				reverse_rotate.c \
				rotate.c \
				error_and_fill.c \
				sort_five.c \
				sort_four.c \
				sort_other_and_radix.c \
				utils.c \
				all_free_ft.c


#######################################################
###### RULES

.c.o:
			gcc ${CFLAGS} -c $< -o $(<:.c=.o)

all:		${NAME}

${NAME}:	${OBJS}
			${MAKE} -C /Users/chabrune/Desktop/42-school/ft_printf
			${MAKE} -C /Users/chabrune/Desktop/42-school/libft
			gcc ${CFLAGS} ${FT_PRINTF} ${LIBFT} ${OBJS} -o ${NAME}

debug:		fclean ${OBJS}
			${MAKE} -C /Users/chabrune/Desktop/42-school/libft
			${MAKE} -C /Users/chabrune/Desktop/42-school/ft_printf
			gcc ${CFLAGS} -fsanitize=address ${FT_PRINTF} ${LIBFT} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS}
			${MAKE} -C /Users/chabrune/Desktop/42-school/ft_printf clean
			${MAKE} -C /Users/chabrune/Desktop/42-school/libft clean

fclean:		clean
			${RM} ${NAME}
			${MAKE} -C /Users/chabrune/Desktop/42-school/ft_printf fclean
			${MAKE} -C /Users/chabrune/Desktop/42-school/libft fclean

re:			fclean all

.PHONY:		all clean re fclean