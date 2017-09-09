// readDataEx.cpp

#include <iostream>
#include <fstream> // file stream 
using namespace std; // std::ifstream

int main (void){
    int id; 
    char product[30];
    float price;

    //  ifstream : to read file
    ifstream readFile("data/data.txt", ios::in);

    // create 'data' folder first...
    if (!readFile){  // print message if file is not open
        cout << "File can not be open\n";
    }
    else {
        
        while(readFile >> id >> product >> price){  // ctrl+z to exit
            cout << id << " " << product << " " << price << endl; // print the data
        }
    }

    return 0;  // ifstream-destructor will close the file
}

/* Outputs
-> 1 Radio 12.3
-> 2 Oven 14.5
-> 3 Computer 100
-> 4 Laptop 120
*/