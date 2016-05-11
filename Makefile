all: main

%: %.cc
	g++-5 -std=c++14 $< -o $@
