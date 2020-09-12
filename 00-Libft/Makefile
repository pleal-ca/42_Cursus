# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 21:38:21 by pleal-ca          #+#    #+#              #
#    Updated: 2020/09/12 11:40:13 by megafone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
INC		= libft.h
SRC		= ft_isblank.c ft_iscntrl.c ft_isgraph.c ft_islower.c ft_ispunct.c ft_isspace.c ft_isupper.c ft_isxdigit.c ft_putchar.c ft_strdel.c ft_sqrt.c ft_swap.c ft_strstr.c ft_strndup.c ft_strncpy.c ft_strncat.c ft_strcpy.c ft_strcmp.c ft_strcat.c ft_strnew.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_isdigit.c ft_isalpha.c ft_strlen.c ft_strlcpy.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strjoin.c ft_strmapi.c ft_substr.c ft_strtrim.c ft_strcpy.c
SBONUS	= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstsize.c
OBJS	= $(SRC:.c=.o)
CCFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(CCFLAGS) -c $(SRC) -I.$(INC)
	@ar -rcs $(NAME) $(OBJS)
	@echo "libft.a ready"

bonus:
	@gcc $(CCFLAGS) -c $(SBONUS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJS)
	@echo "clear objects"

fclean: clean
	@rm -f $(NAME)
	@echo "clean all"

re:		fclean all
	@echo "remake done"
