#include <iostream>

using namespace std;

int stringLength(const char* str) {
    const char* ptr = str; // Pointer to traverse the string
    int length = 0;

    // Iterate through the string until the null character is encountered
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    return length;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = stringLength(str);

    cout << "Length of the string: " << length << endl;

    return 0;
}
