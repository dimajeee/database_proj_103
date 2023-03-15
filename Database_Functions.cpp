#include <iostream>
#include "base.h"
#include <fstream>

void Database::SetColumn(string Name_, int size_){
    ofstream fout;
    fout.open("database.txt");
    fout << Name_ << "\n";
    for (int i = 0; i != size_; i++) fout << '0' << "\n";
    fout.close();
}

