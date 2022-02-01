# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 14:54:10 by spoliart          #+#    #+#              #
#    Updated: 2022/02/01 19:10:31 by spoliart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fun

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

SRCS	=	main.cpp \
			Character.cpp \
			AMateria.cpp \
			Cure.cpp \
			Ice.cpp \
			MateriaSource.cpp
OBJS	=	$(SRCS:.cpp=.o)

all:	$(NAME)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $^ -o $@

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:		fclean all
