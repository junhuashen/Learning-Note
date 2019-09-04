
TARGETS=ipmode moveadd pad screen1 color keypad multiw1 subscl
SRC_FILE=$(foreach temp, $(TARGET),$(temp).c)
#Uncomment and edit the line below if necessary
CFLAGS=-I/usr/include/ncurses

LIBS = -lncurses
#define a function
define GCC_WORK
$1:$1.c
$(CC) $< -o $@ $(CFLAGS) $(LIBS)
echo $<  $@
endef

all:
	for name in $(TARGETS); \
	do \
	gcc -o $$name $$name.c $(LDFLAGS) $(LIBS) $(FCLAGS); \
	done

