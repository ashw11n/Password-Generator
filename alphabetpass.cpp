#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <stdlib.h>

using namespace std; 


int main(){

    //random letter generator
    const char* const a_to_z = "abcdefghijklmnopqrstuvwxyz";
    srand(time(0));
    // generate random number i between 0 and 25 and then a_to_z[i] to gen random letter
    vector<char> password(9);

    for(int i = 0; i < password.size(); ++i){

        int index = rand() % 26;
        password.at(i) = a_to_z[index];
    }
    for(int j = 0; j < password.size(); ++j){
        cout << password.at(j);
    }


}
