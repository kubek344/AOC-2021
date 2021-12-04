#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main() {
    fstream input;
    input.open("input.txt");
    int output = 0;
    int arr[2000];
    string line;
    int i = 0;
    while (getline(input, line)) {
        arr[i] = stoi(line);
        i++;
    }
    int sum = 0;
    int sum2 = 0;
    for (int j = 0; j < 3; j++)
    {
        sum = sum + arr[j];
    }
    for (int i = 3; i < 2000; i++)
    {
        sum2 = sum;
        sum = sum - arr[i - 3];
        sum = sum + arr[i];
        if (sum2 < sum)
        {
            output++;
        }
    }
    cout << output;
}
