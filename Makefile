# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/02 20:28:44 by padan-pe          #+#    #+#              #
#    Updated: 2025/02/06 19:10:40 by padan-pe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc 
CC_FLAGS = -Wall -Wextra -Werror
INCLUDE = -I. #directorio de cabeceras (dir actual)
SRC_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ_FILES = $(SRC_FILES:%.c=%.o)
BONUS_FILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BONUS_OBJ_FILES = $(BONUS_FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ_FILES) # para evitar relink, solo hace cambios en la lib si algun archivo .o ha cambiado
	ar rcs $(NAME) $(OBJ_FILES)

%.o: %.c #regla para compilar archivos .c en .o
	$(CC) $(CC_FLAGS) $(INCLUDE) -c $< -o $@
    
$(BONUS_DIR)/%.o: $(BONUS_DIR)/%.c #regla para compilar bonus
	$(CC) $(CC_FLAGS) $(INCLUDE) -c $< -o $@

bonus: $(OBJ_FILES) $(BONUS_OBJ_FILES) #añadir bonus a la librería
	ar rcs $(NAME) $(BONUS_OBJ_FILES)
clean: #regla para limpiar archivos .o
	rm -f $(OBJ_FILES) $(BONUS_OBJ_FILES)
fclean: #regla para limpiar todo incluyendo la lib
	rm -f $(NAME) $(OBJ_FILES) $(BONUS_OBJ_FILES)

re: fclean all #recompilar desde 0

.PHONY: all clean fclean re bonus