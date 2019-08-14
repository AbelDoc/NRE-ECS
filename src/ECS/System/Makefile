OBJ = $(OBJDIR)NRE_AbstractSystem.o 
OBJDIR = ../../../obj/ECS/System/


all : childs $(OBJ)

childs:

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)