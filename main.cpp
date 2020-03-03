#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;
using std::ofstream ;

#include <stack>
using std::stack;




int main(int argc, char * argv[]) {
    ifstream fileIn;
    string line;
    int i;
    int k = 13;
    string t ;
    t = "abc";


    while (k = 13) {

        fileIn.open(argv[i]);

        if (fileIn.is_open()) {

            ofstream arq[i];
            arq[i].open(t);

            while (getline(fileIn, line)) {

                arq[i].copyfmt(fileIn);
                cout << line << endl;
            }

            fileIn.close();

        } else {
            cout << "Não possivel abrir" << endl;
        }
        i++;
    }
}