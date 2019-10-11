# compiler
CXX = clang++

# flags
CXXFLAGS = -g -Wall -Wformat -Wextra -pedantic -std=c++14

# libs
# LIBS = -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo -lglew -lglfw3

EXE = game

# sources
SOURCES = main.cpp handleFunc.cpp

# creatures
SOURCES += creature/Creature.cpp
SOURCES += creature/Level.cpp
SOURCES += creature/hero/Hero.cpp
SOURCES += creature/enemy/Enemy.cpp

# inventory and items

SOURCES += inventory/Item.cpp
SOURCES += inventory/Item_type/Weapon.cpp
SOURCES += inventory/Item_type/Armor.cpp
SOURCES += inventory/Inventory.cpp

# imgui
# SOURCES += imgui/imgui_impl_glfw.cpp imgui/imgui_impl_opengl3.cpp
# SOURCES += imgui/imgui.cpp imgui/imgui_demo.cpp imgui/imgui_draw.cpp imgui/imgui_widgets.cpp

OBJS = $(addsuffix .o, $(basename $(notdir $(SOURCES))))

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

%.o:creature/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

%.o:creature/hero/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

%.o:creature/enemy/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

%.o:inventory/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

%.o:inventory/Item_type/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

%.o:imgui/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

all: $(EXE)

$(EXE): $(OBJS)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LIBS)

clean:
		rm -rf $(EXE) $(OBJS) imgui.ini
