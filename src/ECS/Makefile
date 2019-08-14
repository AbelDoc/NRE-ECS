COMPONENT = Component
ENTITY = Entity
SYSTEM = System

all : childs 

childs:
	@(cd $(COMPONENT) && $(MAKE))
	@(cd $(ENTITY) && $(MAKE))
	@(cd $(SYSTEM) && $(MAKE))

