EXEC		= bugyellow
SRC_FILES	= main.cpp
O_FILES		= $(SRC_FILES:%.cpp=%.o)

CXXFLAGS	= -std=c++17 -I/opt/finalcut/include
LDFLAGS		= -L/opt/finalcut/lib -lfinal

all: $(EXEC)

$(EXEC): $(O_FILES)
	$(CXX) $(LDFLAGS) $(CXXFLAGS) -o $(EXEC) $(O_FILES)

clean:
	$(RM) $(O_FILES) $(EXEC)