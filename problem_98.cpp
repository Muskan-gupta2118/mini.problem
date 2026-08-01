//write data to a file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");

    file << "Welcome to C++ file handling";
    file.close();

    cout << "Data written successfully.";
    return 0;
}