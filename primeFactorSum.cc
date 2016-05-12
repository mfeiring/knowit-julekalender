/*OPPGAVE 7
Finn summen av alle positive heltall mellom 0 og 1000 som er har 7 som en primtallsfaktor, 
der det reverserte tallet også har 7 som en primtallsfaktor.

For eksempel teller 259 da en får 952 om en reverserer sifrene 
og begge disse tallene har 7 som en primtallsfaktor.*/

#include "primeFactorSum.h"

int primeFactorSum() {
    int count = 0, reverse, num;
    for (int i = 7; i <= 1000; i += 7) {
        num = i, reverse = 0;
        while(num != 0) {
            reverse = reverse*10 + num%10;
            num /= 10;
        }
        count += (i%7 == 0 && reverse%7 == 0) ? i : 0;
    }
    return count;
}