# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 14:54:10 by spoliart          #+#    #+#              #
#    Updated: 2022/01/29 22:44:03 by spoliart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	polymorphism

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp \
			Cat.cpp \
			Dog.cpp \
			AAnimal.cpp \
			Brain.cpp
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
