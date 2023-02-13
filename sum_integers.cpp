#include <iostream>
using namespace std;

int main () {
    string Sample_input = "PRA12Ga782d45601$3 11";
    int res = 0;
    for(auto c : Sample_input) {
        if(c <= '9' && c >= '0') {
            res += (c - '0');
        }
    }

    cout << "Sum : " << res << endl;
    return 0;
}
