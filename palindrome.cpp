#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    int flag=0;
    cout << "Enter a string: ";
    cin >> S;  // reads up to first space

    int len = S.length();

    for (int i = 0; i < len ; ++i) {
        if (S[i] != S[len - 1 - i]) {
            flag=1;
            break;
        }
    }

    if (flag==1)
        cout << " not Palindrome" << endl;
    else
        cout << "Palindrome" << endl;

    return 0;
}

