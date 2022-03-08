ESC_SEQ = \033[
BLUE = $(ESC_SEQ)34m
RED= $(ESC_SEQ)31m
YELLOW = $(ESC_SEQ)33m
GREEN = $(ESC_SEQ)32m
BOLD = $(ESC_SEQ)1m
MOVE_UP = $(ESC_SEQ)1A
ERASE = \r$(ESC_SEQ)K
ERASE_ALL = $(ESC_SEQ)M
ESC_STOP = $(ESC_SEQ)0m
PRINT_INTERLINE = printf '$(GREEN)$(BOLD)================================================================================$(ESC_STOP)\n'
PRINT_INTERLINE_N = printf '$(YELLOW)$(BOLD)================================================================================$(ESC_STOP)\n'

SRCS	= 	srcs/main.cpp \
			srcs/ConversionS.cpp


 		
########################################################################################################################################
OBJS = ${SRCS:.cpp=.o}


HEADER	= include/

NAME = conversionScalar

CLANG = c++ 

C++FLAGS =  -Wall -Werror -Wextra -Wconversion

RM = rm -rf


all: ${NAME}

$(NAME): $(OBJS)
	@$(CLANG) $(C++FLAGS) -I $(HEADER) -o $(NAME) $(OBJS)
	@$(PRINT_INTERLINE)
	@printf '$(YELLOW)executable name: $(BOLD)%s$(ESC_STOP)\n' '$(NAME)';
	@printf '$(YELLOW)compiler:$(ESC_STOP) %s\n' '$(CXX)'; 
	@printf '$(YELLOW)compilation flags:$(ESC_STOP) %s\n' '$(C++FLAGS)'; 
	@printf '$(YELLOW)libraries:$(ESC_STOP) %s\n' '$(LIBS)'; 
	@$(PRINT_INTERLINE)
	@printf '$(YELLOW)$(BOLD)linking object files$(ESC_STOP)\n'
#@printf '\n'
#@sleep 0.5s
	@echo '.'
#@sleep 1s
#@printf '\n'
	@echo '..'
#@sleep 1s
#@printf '\n'
	@echo '...'
	@printf '\n'
	@printf '$(YELLOW)$(BOLD)%s$(ESC_STOP)$(YELLOW) built$(ESC_STOP) √\n' '$@'
	@$(PRINT_INTERLINE)
	@$(DRAW_PROGRESS_BAR)
	@printf '\n'

%.o : %.c
	$(CLANG) $(C++FLAGS) -I $(HEADER) -c $< -o $@

debug:
	@g++ -g ${SRCS} -Wall -Werror -Wextra -o debog_exec
	@printf '$(YELLOW)$(BOLD) debog_exec built $(ESC_STOP) √\n' '$@';
	@printf '\n'

clean: 
	${RM} ${OBJS} debog_exec debog_exec.dSYM
	@$(PRINT_INTERLINE)
	@printf '$(RED)$(BOLD)                              %s\ CLEANNING                       \n' '$(NAME)'
	@$(PRINT_INTERLINE)
	@printf '$(RED)$(BOLD) %s\ removed\n' '$(OBJS)'
	@$(PRINT_INTERLINE)
	@printf '\n'
	@printf '\n'

fclean: clean
	@${RM} ${NAME}
	@$(PRINT_INTERLINE)
	@printf '$(RED)$(BOLD)                              %s\ FCLEAN                          \n' '$(NAME)'
	@$(PRINT_INTERLINE)
	@printf '$(RED)$(BOLD) %s\ removed\n' '$(NAME)'
	@$(PRINT_INTERLINE)

re: fclean all

.PHONY: all clean fclean re