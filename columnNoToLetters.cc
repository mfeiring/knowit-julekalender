/*OPPGAVE 9
Gitt et positivt heltall, finn den tilsvarende kolonnetittelen som vises fram i et Excel ark.

For eksempel:
1 -> A
2 -> B
3 -> C
…
26 -> Z
27 -> AA
28 -> AB
...
52 -> AZ
...
79 -> CA

Finn kolonnetittelen til 142453146368*/

#include <string>
#include "columnNoToLetters.h"

using namespace std;

string columnNoToLetters(unsigned long long num) {
    string str;
    int modulo;
    while (num > 0) {
        modulo = (num - 1)%26;
        str += char(modulo + 65);
        num = (long long) ((num - modulo)/26);
    }
    return string(str.rbegin(), str.rend());
}