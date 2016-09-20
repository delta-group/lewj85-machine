# Makefile for C project
#
# TARGET = test
#
# FILES   =   $(wildcard *.cpp)
# OBJS    =   $(FILES:.cpp=.o)
# ASMS    = $(FILES:.cpp=.s)
#
# # Tools
# GPP     = g++
# RM      = rm -f
#
# # Targets ---------------------------------------
# all:    $(TARGET)
#
# $(TARGET):  $(OBJS)
# 	$(GPP) -o $@  $^
#
# 	asm:    $(ASMS)
#
# 	clean:
# 		$(RM) $(TARGET) $(OBJS) $(ASMS)
#
# 		# Implicit rules --------------------------------
# 		%.o:    %.cpp
# 			$(GPP) -c $< -o $@
#
# 			%.s:    %.cpp
# 				$(GPP) -S -masm=intel $< -o $@

