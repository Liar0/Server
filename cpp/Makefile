#
#
#
#
#
#
#
#
#
#

CC := g++
LPATH = ../lib/
SRC = $(wildcard *.c)
IPATH = -I ../include/
PAR = $(patsubst *.c,${LPATH}*.o,$(notdir ${SRC}))

$(PAR):%.c
	$(CC) -c $^ $(IPATH) -o $@

.PHONY:

test:
	touch $(foreach item,$(PAR),$item)

clean:
	$(RM) -rf $(PAR)
