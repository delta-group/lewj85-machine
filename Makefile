# Makefile for C project

TARGET = test

FILES   =   $(wildcard *.cpp)
OBJS    =   $(FILES:.cpp=.o)
ASMS    =   $(FILES:.cpp=.s)
CFLAG   =   -std=c++11

# Tools
GPP     = g++
RM      = rm -f

# Targets ---------------------------------------
all:    $(TARGET)

$(TARGET):  $(OBJS)
	$(GPP) $(CFLAG) -o $@  $^

asm:    $(ASMS)

clean:
	$(RM) $(TARGET) $(OBJS) $(ASMS)

# Implicit rules --------------------------------
%.o:    %.cpp
	$(GPP) $(CFLAG) -c $< -o $@

%.s:    %.cpp
	$(GPP) -S -masm=intel $< -o $@

