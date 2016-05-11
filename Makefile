all: main

%: %.cc
	g++-5 -std=c++14 $< validIDs.cc stockProfit.cc -o bin/$@
