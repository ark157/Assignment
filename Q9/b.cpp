#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile;
    string line;

    inFile.open("output.txt");

    if (!inFile) {
        cout << "Error opening file for reading." << endl;
        return 1;
    }

    cout << "Contents of the file:" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}
