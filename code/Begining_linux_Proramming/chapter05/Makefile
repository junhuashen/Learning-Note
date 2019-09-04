# Makefile for Beginning Linux Programming 4th Edition
# Chapter 5

MENU=menu1 menu2 menu3 menu4 menu5
TERMINAL=sizeterm badterm password
KBHIT=kbhit

LDFLAGS=-lncurses

ALL= $(MENU) $(TERMINAL) $(KBHIT)
SRC_FIlE=$(addsuffix .c, $(ALL) ) 
all: 
	for name in $(ALL); \
	do \
	gcc -o $$name $$name.c $(LDFLAGS); \
	done
clean:
	@rm -f $(ALL) *~
