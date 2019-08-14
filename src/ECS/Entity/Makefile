OBJ = $(OBJDIR)NRE_Entity.o 
OBJDIR = ../../../obj/ECS/Entity/

MANAGER = Manager

all : childs $(OBJ)

childs:
	@(cd $(MANAGER) && $(MAKE))

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)