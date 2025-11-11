#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile;

    outFile.open("output.txt");

    if (!outFile) {
        cout << "Error opening file for writing." << endl;
        return 1;
    }

    outFile << "This is a line written to the file." << endl;
    outFile << "Writing more text to the file." << endl;

    outFile.close();

    cout << "Data written to file successfully." << endl;

    return 0;
}
