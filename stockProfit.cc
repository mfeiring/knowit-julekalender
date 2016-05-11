/*OPPGAVE 2
Lenken http://pastebin.com/sJVZp7BH inneholder en liste av tall. Den første linja inneholder prisen på en aksje på dag 1,
den andre linja inneholder prisen på den samme aksjen på dag 2 og så videre.

Gitt at du kun har lov til å gjøre én transaksjon, det vil si kjøpe én aksje for å så selge én aksje,
hva er den høyeste fortjenesten du kan oppnå gitt de vedlagte aksjeprisene?

Svar skal oppgis med fire desimaler. Bruk punktum som desimalskilletegn. Eksempel: 12.2446 */

#include <fstream>
#include <vector>
#include "stockProfit.h"

using namespace std;

double maxProfit() {
    double value;
    ifstream file("StockPrices.txt");
    vector<double> list;
    while (file >> value) {
        list.push_back(value);
    }
    double minValue = list[0], maxDiff = list[1] - list[0];
    for (int i = 1; i < list.size(); i++) {
        maxDiff = (list[i] - minValue > maxDiff) ? list[i] - minValue : maxDiff;
        minValue = (list[i] < minValue) ? list[i] : minValue;
    }
    return maxDiff;
}