OBJ = main.o menu.o screen.o triangle.o circle.o rectangle.o square.o horizLine.o interLine.o
APPNAME = figures.a
TAR = figures.tar

$(APPNAME) : $(OBJ)
		gcc -o $(APPNAME) $(OBJ)

%.o : %.c
		gcc -c -o $@ $<


clean :
		rm $(OBJ) $(APPNAME)

archive :
		tar cf $(TAR) *

