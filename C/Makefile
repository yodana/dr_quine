NAME		= Colleen
NAME1		= Grace
NAME2		= Sully

SRC 		= Colleen.c
SRC1		= Grace.c
SRC2		= Sully.c

SRC_FOLDER	=	./
BIN_FOLDER	=	bin
OBJ_FOLDER	=	$(BIN_FOLDER)/obj

OBJ 		= $(addprefix $(OBJ_FOLDER)/,$(SRC:.c=.o))
OBJ1		= $(addprefix $(OBJ_FOLDER)/,$(SRC1:.c=.o))
OBJ2		= $(addprefix $(OBJ_FOLDER)/,$(SRC2:.c=.o))

SRCLOCA		= $(shell find $(SRC_FOLDER) -type d)
OBJLOCA		= $(subst $(SRC_FOLDER), $(OBJ_FOLDER), $(SRCLOCA))

YELLOW 		= \033[0;33m
GREEN		= \033[0;32m
END_COLOR	= \033[0m

all: $(NAME) $(NAME1) $(NAME2)

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ)
	@printf "$(GREEN)\\nCompilation Colleen finish \\n$(END_COLOR)"

$(NAME1): $(OBJ1)
	@gcc -o $(NAME1) $(OBJ1)
	@printf "$(GREEN)\\nCompilation Grace finish \\n$(END_COLOR)"

$(NAME2): $(OBJ2)
	@gcc -o $(NAME2) $(OBJ2)
	@printf "$(GREEN)\\nCompilation Sully finish \\n$(END_COLOR)"

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
	@rm -rf $(NAME) $(NAME1) $(NAME2)
	@printf "$(GREEN)Fclean [OK] $(END_COLOR)\n"

re : fclean all

.PHONY : all clean fclean re