OBJ = $(OBJDIR)NRE_AbstractComponent.o 
OBJDIR = ../../../obj/ECS/Component/


all : childs $(OBJ)

childs:

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)