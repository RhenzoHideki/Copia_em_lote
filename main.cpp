#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::ios;

#include <string>
using std::string;
using std::basic_string;

#include <fstream>
using std::ifstream;
using std::ofstream ;

#include <queue>
using std::queue;

#include <sstream>
using std::stringstream ;

#include <experimental/filesystem>

#include <stdlib.h>
#include <stdio.h>

bool copiar_doc(basic_string<char> srce_file, basic_string<char> dest_file )
{
    ifstream srce( srce_file, ios::binary ) ;
    ofstream dest(dest_file, ios::binary);

    dest << srce.rdbuf();
    srce.close();

}


int main() {

    string line;    //variaveis
    string T;
    string original;
    string directory, path ;
    queue<string> fila;


    getline(cin , line ) ; //Pegar o diretorio e arquivos desejados
    stringstream X(line);


    while (getline(X, T, ' ')) {
        fila.push(T);
    };

    directory=fila.front();
    path=fila.front();
    fila.pop();


    while (!fila.empty()) {

        path = directory + fila.front();

        original = fila.front();

        copiar_doc( fila.front() , path );

        fila.pop();

    }


}