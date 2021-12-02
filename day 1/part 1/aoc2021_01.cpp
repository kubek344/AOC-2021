#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main() {
    fstream input;
    input.open("input.txt");
    string line1;
    string line2;
    int output = 0;
    while (getline(input, line1)){
        if (line1 > line2 ){
            output++;
        }
        line2 = line1;
    }
    cout << output;
}
