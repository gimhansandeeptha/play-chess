CXX = g++
CXXFLAGS = -std=c++17 -Iinclude -I"../../WinBGIm-64/libbgi/include/bgi" -Wall -g
LDFLAGS = -L"../../WinBGIm-64/build/libbgi" -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

SRCS = $(wildcard src/*.cpp) main.cpp
BUILD_DIR = build
OBJS = $(patsubst %.cpp,$(BUILD_DIR)/%.o,$(SRCS))

TARGET = chessengine

ifeq ($(OS),Windows_NT)
    EXE = .exe
    RM = del /Q
    MKDIR_P = if not exist "$(BUILD_DIR)\src" mkdir "$(BUILD_DIR)\src"
else
    EXE =
    RM = rm -f
    MKDIR_P = mkdir -p $(BUILD_DIR)/src
endif

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@$(EXE) $^ $(LDFLAGS)

$(BUILD_DIR)/%.o: %.cpp
	$(MKDIR_P)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
ifeq ($(OS),Windows_NT)
	$(RM) $(BUILD_DIR)\*.o $(BUILD_DIR)\src\*.o $(TARGET)$(EXE)
else
	$(RM) $(BUILD_DIR)/*.o $(BUILD_DIR)/src/*.o $(TARGET)
endif
