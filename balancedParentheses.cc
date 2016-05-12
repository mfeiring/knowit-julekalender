/*OPPGAVE 6
Gitt at vi har n par parenteser, hvor mange kombinasjoner av balanserte parenteser
(dvs alle åpne parenteser er lukket) kan en lage?
Eksempel:
Gitt n=3, har vi følgende kombinasjoner som gir balanserte parenteser:
"((()))", "(()())", "(())()", "()(())", "()()()"
Altså fem ulike måter.

Hvor mange velformede kombinasjoner finnes det for n = 13?*/

#include "balancedParentheses.h"

static int count = 0;

void numOfCombinations(int left, int right) {
    if (left == 0 || right == 0) {
        count++;
    } else if (left == right) {
        numOfCombinations(left - 1, right);
    } else if (left < right) {
        numOfCombinations(left - 1, right);
        numOfCombinations(left, right - 1);
    }
}

int balancedParentheses(int numOfParentheses) {
    numOfCombinations(numOfParentheses, numOfParentheses);
    return count;
}
