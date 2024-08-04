TARGETS=static_test hourglass_test square_test triangle_test star_test hexagon_test scene
SHAPE_LIB=canvas.o\
					drawable.o\
					static.o\
					hourglass.o\
					square.o\
					triangle.o\
					star.o\
					hexagon.o
					

CXXFLAGS=-g `pkg-config sdl2 --cflags`
LDLIBS=`pkg-config sdl2 --libs`
CXX=g++
LD=g++
CC=g++

all: $(TARGETS)
static_test: $(SHAPE_LIB) static_test.o
hourglass_test: $(SHAPE_LIB) hourglass_test.o
square_test: $(SHAPE_LIB) square_test.o
triangle_test: $(SHAPE_LIB) triangle_test.o
star_test: $(SHAPE_LIB) star_test.o
hexagon_test: $(SHAPE_LIB) hexagon_test.o
scene: $(SHAPE_LIB) scene.o
 
clean:
	rm -f $(TARGETS) *.o