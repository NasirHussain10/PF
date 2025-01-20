#include <iostream>
#include <string>
using namespace std;

// Function definition after main()
string convert() {
    char str[32] = "Pakistan Zindabad";
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert uppercase to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        }
    }
    cout << "The string in converted case is:\n" << str << endl;
}

int main() {
    convert(); // Call the convert function
    return 0;
}


