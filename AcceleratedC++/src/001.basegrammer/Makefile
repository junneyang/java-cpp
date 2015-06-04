include ../../Inc.mk

EXE=object function
all:$(EXE)
object:object.o CBase.o
	$(CXX) -o object object.o CBase.o
object.o:object.cpp CBase.h
	$(CXX) -c object.cpp  $(CXXFLAGS)
CBase.o:CBase.cpp CBase.h
	$(CXX) -c CBase.cpp $(CXXFLAGS)
function:function.o
	$(CXX) -o function function.o
function.o:
	$(CXX) -c function.cpp  $(CXXFLAGS)
clean:
	rm -rf *.o $(EXE)
	@echo clean done.
