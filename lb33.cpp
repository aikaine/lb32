#include <iostream>
#include <map>
#include <sstream>
#include <windows.h> 
using namespace std;
int main()
 {
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string inputString;
    cout << "Введите строку: ";
    
    getline(cin, inputString);

    map<string, int> wordCount;

    istringstream iss(inputString);
    string word;
    
    while (iss >> word) {
        wordCount[word]++;
    }

    cout << "Таблица слов с указанием повторений:" << endl;
    for (auto const& pair : wordCount) {
        cout << pair.first << " | " << pair.second << endl;
    }

    return 0;
}
