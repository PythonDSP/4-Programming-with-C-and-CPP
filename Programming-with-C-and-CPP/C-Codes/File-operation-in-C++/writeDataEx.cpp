// writeDataEx.cpp

#include <iostream>
#include <fstream> // file stream 
using namespace std; // std::ofstream

int main (void){
    int id; 
    char product[30];
    float price;

    //  ofstream : to open file
    ofstream outFile("data2/data.txt", ios::out);

    // create 'data' folder first...
    if (!outFile){  // print message if file is not open
        cout << "File can not be open\n";
    }
    else {
        cout << "Enter details i.e. id, product-name and price\n";
        cout << "-> ";
        // cin >> id >> product >> price;
        
        while(cin >> id >> product >> price){  // ctrl+z to exit
            outFile << id << " " << product << " " << price << endl; // write to file
            cout << "-> ";
        }
    }

    return 0;  // ofstream-destructor will close the file
}

/* Outputs
Enter details i.e. id, product-name and price
-> 1 Radio 12.3
-> 2 Oven 14.5
-> 3 Computer 100
-> 4 Laptop 120
-> ^Z
*/
