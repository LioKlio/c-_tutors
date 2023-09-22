#include <string>
#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main() {
    // 1
    string firstName = "Jon";
    string lastName = "Nilson";
    string fullName = firstName + " " + lastName;
    cout << fullName << "\n";

    // 2
    std::string str = "C++ Programming Language";
    std::string substr = str.substr(3, 11);
    cout << substr << "\n";

    // 3
    string text = "Welcome to the world of C++";
    char letterToFind = 'o';
    size_t position = text.find(letterToFind);
    cout << "The first occurrence of '" << letterToFind << "' is at position: " << position << '\n';

    // 4
    string sentence = "I love cats";
    sentence.replace(sentence.find("cats"), 4, "dogs");
    cout << sentence << '\n';

    // 5
    string textForTransform = "Learning C++";
    transform(textForTransform.begin(), textForTransform.end(), textForTransform.begin(), ::toupper);
    cout << "Uppercase text: " << textForTransform << '\n';

    // 6
    string message = "Welcome!";
    size_t mLength = message.length();
    cout << "String of \"" << message << "\" lenght = " << mLength << "\n";

    // 7
    string original = "C++ is Fun";
    string reversStr = original;
    reverse(reversStr.begin(), reversStr.end()); 
    cout << "Revers of string \"" << original << "\" = " << reversStr << "\n";

    // 8
    string originaltext = "C++ is powerful";
    string textFoInsert = originaltext;
    textFoInsert.insert(originaltext.length(), " and easy");
    cout << originaltext.size() << " - " << originaltext.length() << " - \"" << textFoInsert << "\"\n";

    // 9
    string sentence9 = "C++ is hard but rewarding";
    sentence9.erase(sentence9.find(" h"), 9);
    cout << sentence9 << "\n";

    // 10
    string str1 = "C++";
    string str2 = "C++";
    bool isEqual = (str1 == str2);
    cout << isEqual << "\n";


    // cout << << "\n";
    return 0;
}