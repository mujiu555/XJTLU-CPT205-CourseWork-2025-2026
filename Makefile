.PHONY: all
all: main.exe

%.exe: src/%.cc
	$(CXX) $^ -l m -l opengl32 -l glu32 -l freeglut -l gdi32  -o $@

.PHONY: clean
clean:
