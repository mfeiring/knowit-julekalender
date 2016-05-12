/*OPPGAVE 8
Vi definerer et primtall som et MIRPTALL dersom vi fortsatt har er primtall når sifrene reverseres.
Regelen gjelder imidlertid ikke dersom tallet samtidig er et palindrom (dvs likt samme hvilken ende det leses fra, som 969).

Eksempel 1: 13 er et primtall. Det er også et MIRPTALL, fordi tallet i revers, 31, også er et primtall.
Eksempel 2: 23 er et primtall. Det er imidlertid ikke et MIRPTALL, da vi får 32 om vi reverserer det, som ikke er et primtall.
Eksempel 3: 5 og 101 er ikke MIRPTALL, selv om de er primtall, da disse er palindromer.

Hvor mange positive heltall under 1000 er MIRPTALL?

Tips: Selv om 13 og 31 reverseres til hverandre er de fortsatt MIRPTALL “hver for seg” (på grunn av definisjonen).
Begge må derfor telles med som en del av resultatet.*/

#include <iostream>
#include <string>
#include "mirpNumbers.h"

using namespace std;

bool isPrime(int num) {
    if (num == 2) { return true; }
    if (num < 2 || num%2 == 0) { return false; }
    for (int i = 3; i*i <= num; i += 2) {
        if (num%i == 0) { return false; }
    }
    return true;
}

bool isPalindrome(int num) {
    string numStr = to_string(num);
    return (numStr == string(numStr.rbegin(), numStr.rend())) ? true : false;
}

int mirpNumbers() {
    int count = 0, num, reverse;
    //Single digit numbers are per definition NOT mirp numbers, start iteration from 10.
    for (int i = 10; i <= 1000; i++) {
        num = i, reverse = 0;
        while(num) {
            reverse = reverse*10 + num%10;
            num /= 10;
        }
        count += (isPrime(i) && isPrime(reverse) && !isPalindrome(i)) ? 1 : 0;
    }
    return count;
}
