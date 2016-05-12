/*OPPGAVE 5
Et anagram er et ord som kan skrives om til et annet ord ved å omrokere bokstavene. 
Hvor mange av ordene totalt i ordlista http://pastebin.com/sGbqMyCa er anagrammer av andre ord i lista?
Merk at vi kun er ute etter ord i lista, ikke ord som er sammensatt av flere ord.

Eksempel input: acre, care, race, agnes, senga, eple
Eksempel output: 5 (dvs alle unntatt eple er et anagram av et annet ord i lista)*/

#include <algorithm>
#include <fstream>

using namespace std;

int numberOfAnagrams() {
    string line;
    vector<string> words;
    fstream file("resources/Anagram_list.txt");
    while (file >> line) {
        sort(line.begin(), line.end());
        words.push_back(line);
    }
    sort(words.begin(), words.end());
  
    vector<string> uniqueWords = words;
    uniqueWords.erase(unique(uniqueWords.begin(), uniqueWords.end()), uniqueWords.end());
    
    vector<string> diff(uniqueWords.size());
    vector<string>::iterator it;
    it = std::set_difference(words.begin(), words.end(), uniqueWords.begin(), uniqueWords.end(), diff.begin());
    diff.resize(it - diff.begin());  

    int count = 0;
    for (int i = 0; i < diff.size(); i++) {
        if (diff[i] != diff[i + 1]) {
            count++;
        }
    }
    
    return diff.size() + count;
}
