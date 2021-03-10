NAME		= Colleen

SRC 		= Colleen.c

SRC_FOLDER	=	./
BIN_FOLDER	=	bin
OBJ_FOLDER	=	$(BIN_FOLDER)/obj

OBJ 		= $(addprefix $(OBJ_FOLDER)/,$(SRC:.c=.o))
SRCLOCA		= $(shell find $(SRC_FOLDER) -type d)
OBJLOCA		= $(subst $(SRC_FOLDER), $(OBJ_FOLDER), $(SRCLOCA))

YELLOW 		= \033[0;33m
GREEN		= \033[0;32m
END_COLOR	= \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ)
	@printf "$(GREEN)\\nCompilation Colleen finish \\n$(END_COLOR)"

$(OBJ_FOLDER)/%.o:	$(SRC_FOLDER)/%.c | $(OBJ_FOLDER)
	@gcc $< -c -o $@ $(FLAGS) -g

$(OBJ_FOLDER):
	@mkdir -p $(OBJLOCA)

$(BIN_FOLDER):
	@mkdir -p $(BIN_FOLDER)

$(MINILIBX_PATH)/$(MINILIBX):
	@make -C $(MINILIBX_PATH)

clean :
	@rm -rf $(BIN_FOLDER)
	@printf "$(GREEN)Clean [OK] $(END_COLOR)\n"

fclean : clean 
	@rm -rf $(NAME)
	@printf "$(GREEN)Fclean [OK] $(END_COLOR)\n"

re : fclean all

.PHONY : all clean fclean re