//copy contents fron one file to another file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("source.txt");
    ofstream destination("destination.txt");

    char ch;

    while(source.get(ch)) {
        destination.put(ch);
    }

    source.close();
    destination.close();

    cout << "File copied successfully.";
    return 0;
}