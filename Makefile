#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/23 11:09:14 by pbompard          #+#    #+#              #
#    Updated: 2015/01/27 12:21:20 by pbompard         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CFLAG = -Wall -Werror -Wextra

NAME = libft.a

FILE =	ft_strlen \
		ft_strdup \
		ft_strcpy \
		ft_strncpy \
		ft_strcat \
		ft_strncat \
		ft_strchr \
		ft_strrchr \
		ft_strcmp \
		ft_memcpy \
		ft_memmove \
		ft_strlcat \
		ft_strstr \
		ft_memccpy \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_itoa \
		ft_bzero \
		ft_toupper \
		ft_tolower \
		ft_atoi \
		ft_memcmp \
		ft_memchr \
		ft_strncmp \
		ft_strnstr \
		ft_memset \
		ft_putstr \
		ft_putchar \
		ft_putendl \
		ft_putnbr \
		ft_putstr_fd \
		ft_putchar_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_memalloc \
		ft_memdel \
		ft_strnew \
		ft_strdel \
		ft_strclr \
		ft_striter \
		ft_striteri \
		ft_strmap \
		ft_strmapi \
		ft_strequ \
		ft_strnequ \
		ft_strsub \
		ft_strjoin \
		ft_strsplit \
		ft_strtrim \
		ft_lstadd \
		ft_lstdel \
		ft_lstdelone \
		ft_lstiter \
		ft_lstmap \
		ft_lstnew \
		ft_lstsize

SRC = $(addsuffix .c, $(FILE))

OBJ = $(addsuffix .o, $(FILE))

all: $(NAME)

$(NAME): 
	gcc $(CFLAG) -c $(SRC)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
