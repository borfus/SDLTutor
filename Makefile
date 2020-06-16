CC=gcc
FLAGS=-O2 -c -Wall
LDFLAGS=-lSDL2 -lSDL2_image -lz -lpng16
DEBUG=
SOURCEDIR=src
BUILDDIR=build
EXECUTABLE=SDLTutor
SOURCES=$(wildcard $(SOURCEDIR)/*.c)
OBJECTS=$(patsubst $(SOURCEDIR)/*.c,$(BUILDDIR)/%.o,$(SOURCES))


all: builddir $(BUILDDIR)/$(EXECUTABLE)

builddir:
	mkdir -p $(BUILDDIR)

$(BUILDDIR)/$(EXECUTABLE): $(OBJECTS)
	$(CC) $^$(DEBUG) -o $@ $(LDFLAGS)

$(OBJECTS): 
$(BUILDDIR)/%.o: $(SOURCEDIR)/%.c
	$(CC) $(FLAGS) $< -o $@

clean:
	rm -f $(BUILDDIR)/*.o $(BUILDDIR)/$(EXECUTABLE)

dev: debug all

debug:
	$(eval DEBUG += -g)
