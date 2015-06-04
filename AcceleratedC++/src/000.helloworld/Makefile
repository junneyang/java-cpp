include ../../Inc.mk

EXE=helloworld
OBJ=helloworld.o h0.o h1.o
$(EXE):$(OBJ)
	$(CXX) -o $(EXE) $(OBJ)
helloworld.o:helloworld.cpp h0.h h1.h
	$(CXX) -c helloworld.cpp  $(CXXFLAGS)
h0.o:h0.cpp h0.h
	$(CXX) -c h0.cpp $(CXXFLAGS)
h1.o:h1.cpp h1.h
	$(CXX) -c h1.cpp $(CXXFLAGS)
clean:
	rm -rf *.o $(EXE)
