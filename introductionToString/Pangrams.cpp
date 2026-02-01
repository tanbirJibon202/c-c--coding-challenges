#include <bits/stdc++.h>
using namespace std;

string pangrams(string str) {
    int count[26] = {0};
    int unique_letters = 0;

    for (char it : str) {
        if (isalpha(it)) { 
            it = tolower(it);
            int index = it - 'a';
            
            if (count[index] == 0) {
                unique_letters++;
            }
            // count[index]++;
            count[index] = count[index] + 1;
        }
    }

    if (unique_letters == 26) {
        return "pangram";
    } else {
        return "not pangram";
    }
}

int main() {
    string str;
    if (getline(cin, str)) {
        cout << pangrams(str) << endl;
    }
    return 0;
}