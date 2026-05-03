#include <iostream>
#include <string>

using namespace std;

void StringEval(int& tabs, int& spaces, int& lines, string sent) {
    // Iterate through the string character by character
    for (int i = 0; i < sent.size(); i++) {
        if (sent[i] == ' ') {
            spaces++;
        } else if (sent[i] == '\t') {
            tabs++;
        } else if (sent[i] == '\n') {
            lines++;
        }
    }
}

int main() {
    string sent;
    // Initializing counters.
    int tabs = 0, spaces = 0, lines = 1;
    cout << "Enter a string (Put'@' at the end of input and then Press Enter):" << endl;
    // getline with '@ as a delimiter allows multi-line input
    getline(cin, sent, '@');
    // If the input is empty, reset lines to 0
    if (sent.empty()) {
        lines = 0;
    }

    StringEval(tabs, spaces, lines, sent);

    cout << "\n === String Metrics === " << endl;
    cout << "Characters : " << sent.size() << endl;
    cout << "Spaces     : " << spaces << endl;
    cout << "Tabs       : " << tabs << endl;
    cout << "Lines      : " << lines << endl;

    return 0;
}

