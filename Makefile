NAME = bomberman

CXX = g++
CXXFLAGS = -Wall -Wextra -fsanitize=address
IFLAG = -Iinclude

SRC_DIR = src
OBJ_DIR = obj
OUT_DIR = out

SRC = $(addprefix $(SRC_DIR)/, Tests.cpp Map.cpp Config.cpp TileConfig.cpp)
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $(IFLAG) -c $^ -o $@

$(OUT_DIR)/$(NAME): $(OBJ) | $(OUT_DIR)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

$(OUT_DIR):
	mkdir $@

$(OBJ_DIR):
	mkdir $@

.PHONY: clean

clean:
	rm -rf $(OBJ_DIR)