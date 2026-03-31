#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int temperature = rand() % 100;
    int production = rand() % 500;
    int machineStatus = rand() % 2;

    ofstream file("data.json");

    file << "{\n";
    file << "  \"temperature\": " << temperature << ",\n";
    file << "  \"production\": " << production << ",\n";
    file << "  \"machine\": " << machineStatus << "\n";
    file << "}";

    file.close();

    cout << "data.json created!" << endl;

    return 0;
}