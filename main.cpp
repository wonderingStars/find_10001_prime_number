#include <iostream>

using namespace std;
int isPrime(int number);
int main() {

    bool switchPrime  = false;
    int i  = i ;
    int couter = 0;

    while(switchPrime == false){
        i++;

        if(isPrime(i) != -1){

            if(couter == 10001){
            cout << isPrime(i) <<endl;

            }
            couter++;
        }

    }


    return 0;
}
9791913387549


int isPrime(int number) {

    for (int i = 2; i < number; i++) {

        if (number % i == 0) {
            return -1;
        }
    }

    return number;
}