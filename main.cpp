#include <iostream>

using namespace std;  

int main() {
    const string reset = "\033[0m";        
    const string yellow = "\033[33m";
    const string purple = "\033[35m";       


    cout << "Name          : " << yellow << "\"The war and the peace\"" << reset << endl;
    cout << "Avtor         : " << "L.N. Tolstoj" << endl;
    cout << "izdatelstvo   : " << "Piter" << endl;
    cout << "Pages         : " << purple << "500" << reset << endl;

    return 0;
}
