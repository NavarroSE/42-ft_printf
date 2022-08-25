# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 13:04:49 by manavarr          #+#    #+#              #
#    Updated: 2022/08/25 12:45:58 by manavarr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=   libftprintf.a
SRCS	=	ft_printf.c \
			ft_print_cip.c \
			ft_print_num.c \
			ft_hex.c
			
OBJS	= $(SRCS:.c=.o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all:	$(NAME)

$(NAME):	
		${CC} -c ${CFLAGS} ${SRCS} 
		ar crs ${NAME} ${OBJS}

bonus:		${OBJS}
			ar crs ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}
		 
re:			fclean all

.PHONY: all, clean, fclean, re