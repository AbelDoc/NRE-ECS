OBJ = $(OBJDIR)NRE_EntityManager.o 
OBJDIR = ../../../../obj/ECS/Entity/Manager/


all : childs $(OBJ)

childs:

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)