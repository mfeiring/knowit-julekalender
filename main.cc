#include <iostream>
#include <iomanip>
#include "validIDs.h" //Assignment 1
#include "stockProfit.h" //Assignment 2
#include "progDaysOnFriday.h" //Assignment 3
#include "countBases.h" //Assignment 4
#include "numberOfAnagrams.h" //Assignment 5

using namespace std;

int main() {
    cout << countValidIDs() << endl;
    cout << fixed << setprecision(4) << maxProfit() << endl;
    cout << progDaysOnFriday() << endl;
    cout << countBases() << endl;
    cout << numberOfAnagrams() << endl;
}


