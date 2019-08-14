OBJ = $(OBJDIR)NRE_Main.o 
OBJDIR = ../obj/

ECS = ECS

all : childs $(OBJ)

childs:
	@(cd $(ECS) && $(MAKE))

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)