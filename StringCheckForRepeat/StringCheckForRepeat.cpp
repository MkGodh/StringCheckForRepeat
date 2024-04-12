#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;
int main() {

    std::string str;
    std::cin >> str;
    int pos = 0;
    std::string repeatWord;

    for (int i = 1; i < str.length(); ++i) {
        if (str[pos] == str[i]) {
            repeatWord += str[i];
            pos++;

        }
        else {
            pos = 0;
            repeatWord = "";
        }
    }

    bool isRepeat = true;

    for (int i = 0, j = 0; i < str.size(); ++i, ++j) {
        if (j == repeatWord.length())
            j = 0;
        if (str[i] != repeatWord[j]) {
            isRepeat = false;
            break;
        }
    }

    if (isRepeat) {
        std::cout << "Yes\n";
    }
    else {
        std::cout << "No\n";
    }
}