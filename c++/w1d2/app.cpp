#include <string>
#include <iostream>
#include <cstdint>

using namespace std;

int calculateSum(int arr[], int arrLength){
    int summ = 0;
    for(int i = 0; i < arrLength; i++) {
        summ += arr[i];
    };
    return summ;
};

int countVowels(char arr[], int arrLength) {
    int count = 0;
    for(size_t i = 0; i < arrLength; i++) {
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
            count++;
        }
    }
    return count;
};

int main() {
    // 1
    int numbers[5] = {20, 18, 17, 13, 4};
    for(int i = 0; i < 5; i++) {
        cout << i << ": " << numbers[i] << "\n";
    };

    // 2
    int arr[5] = {20, 18, 17, 13, 4};
    size_t summ = calculateSum(arr, 5);
    cout << "\n" << "Array summ = " << summ << "\n\n";

    // 3
    char charArr[] = "Hello!";
    cout << "[";
    for(size_t i = 0; i < charArr[i] != '\0'; i++) {
        cout << "\"" << charArr[i] << "\", ";
    };
    cout << "\"\\0\"]" << "\n\n";

    // 4
    char arr4[] = "Hello World!e";
    size_t vowelsCount = countVowels(arr4, 13);
    cout << "Vowels count = " << vowelsCount << "\n\n";

    // 5
    int nums[10];
    int totalSize = sizeof(nums);
    int numElements = totalSize / sizeof(nums[0]);
    cout << "Total size = " << totalSize << "bytes; Count of elements = " << numElements << "\n\n";




    return 0;
};

