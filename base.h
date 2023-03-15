#pragma once
#include <string>

using namespace std;

class Database {
    private:
        int len;
        char* column = new char[len];
        int length;
        string Name;
    public:
        Database(char* column, string Name){
            this->column = column;
            this->Name = Name;
        }
    static void SetColumn(string Name_, int size_);
    void GetColumn(string Name_);
};