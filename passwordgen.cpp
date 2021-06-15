#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <stdlib.h>

using namespace std; 


int main(){
    // COMPLETED: password generator program for 9 digit number
    vector<int> randompass(9);
    srand(time(0));

    for(int i = 0; i < randompass.size(); ++i){
        // generate random number and then push back to vector
        randompass.at(i) = rand() % 10;
    }
    for(int i = 0; i < randompass.size(); ++i){
        cout << randompass.at(i);
    }
   // rand() % 100 will give within range of 0 to 99, so use rand() % 10

}