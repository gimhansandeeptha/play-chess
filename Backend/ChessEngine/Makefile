CXX = g++
CXXFLAGS = -std=c++17 -Iinclude -I"../../../WinBGIm-64/libbgi/include/bgi" -Wall -g
LDFLAGS = -L"D:/Gimhan Sandeeptha/Gimhan/Projects/WinBGIm-64/build/libbgi" -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

SRCS = $(wildcard src/*.cpp)
OBJS = $(SRCS:.cpp=.o) main.o
TARGET = chessengine

# Detect OS (Windows vs Unix-based)
ifeq ($(OS),Windows_NT)
    RM = del /Q
    DEL_CMD = del /Q
else
    RM = rm -f
    DEL_CMD = rm -f
endif

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
ifeq ($(OS),Windows_NT)
	for %%f in ($(OBJS) $(TARGET)) do $(DEL_CMD) "%%f"
else
	$(RM) $(OBJS) $(TARGET)
endif
