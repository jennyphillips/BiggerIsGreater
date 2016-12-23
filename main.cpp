#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    cout << "Enter number of test case (in range from 1 to 10 in power 5)" << endl;

    int t;
    cin >> t;

    if (t < 1 || t > pow(10, 5)) {
        throw invalid_argument("Invalid number is indicated " + t);
    }

    cout << "Enter " << t << " lower-case English letter characters," << endl
    << "each on new the line (length in range from 1 to 100)" << endl;

    string str[t];
    cin.ignore();

    for (int i = 0; i < t; i++) {
        string line;
        getline(std::cin, line);
        transform(line.begin(), line.end(), line.begin(), ::tolower);
        str[i] = line;
        transform(line.begin(), line.end(), line.begin(), ::tolower);

        if (abs(line.length()) < 1 || abs(line.length()) > 100) {
            throw invalid_argument("Invalid length of the characters indicated " + line.length());
        }
    }

    string lexic[t];
    for (int i = 0; i < t; i++) {
        string temp = str[i];
        if (next_permutation(temp.begin(), temp.end())) lexic[i] = temp;
        else lexic[i] = "no answer";
    }

    for (int i = 0; i < t; i++) {
        cout << lexic[i] << endl;
    }

    cin.get();
    return 0;
}
