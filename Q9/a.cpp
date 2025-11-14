#include <iostream>

#include <fstream>

using namespace std;

int main() {


ofstream fout("sample.txt");

fout << "This is a sample file.";

fout.close();

cout << "File written successfully.";

return 0;
}