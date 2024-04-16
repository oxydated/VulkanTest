# Makefile for compiling a Vulkan vertex shader on Windows using nmake

# Compiler and compiler flags
CC = glslc.exe

# Source file



SOURCEVERT = \
    shaders\shader.vert

SOURCEFRAG = \
    shaders\shader.frag

# Output file
OUTPUTVERT = shaders\vert.spv

OUTPUTFRAG = shaders\frag.spv

# Default target
all: $(OUTPUTVERT) $(OUTPUTFRAG)

# Rule to compile the vertex shader
$(OUTPUTVERT): $(SOURCEVERT)
    $(CC) -o $@ $**

$(OUTPUTFRAG): $(SOURCEFRAG)
    $(CC) -o $@ $**

# Clean target
clean:
    del $(SOURCEVERT) $(SOURCEFRAG)
