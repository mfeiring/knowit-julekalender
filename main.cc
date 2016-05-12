#include <iostream>
#include <iomanip>
#include "validIDs.h" //Assignment 1
#include "stockProfit.h" //Assignment 2
#include "progDaysOnFriday.h" //Assignment 3
#include "countBases.h" //Assignment 4
#include "numberOfAnagrams.h" //Assignment 5
#include "balancedParentheses.h" //Assignment 6
#include "primeFactorSum.h" //Assignment 7
#include "mirpNumbers.h" //Assignment 8

using namespace std;

int main() {
    cout << countValidIDs() << endl;
    cout << fixed << setprecision(4) << maxProfit() << endl;
    cout << progDaysOnFriday() << endl;
    cout << countBases() << endl;
    cout << numberOfAnagrams() << endl;
    cout << balancedParentheses(13) << endl;
    cout << primeFactorSum() << endl;
    cout << mirpNumbers() << endl;
}


