#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int inputNumber;
    int resztaDzielenia;
    bool liczbaJestPierwsza = true;


    cout << "Input number" << endl;
    cin >> inputNumber;
    if(inputNumber>0){

        if(inputNumber == 1){
            cout << "One is neither a prime nor a composite number." << endl;
            exit(0);
            }

        double kwadrat = floor(sqrt(inputNumber));

        if(inputNumber>1){
            for(int i = 2; i<=kwadrat; ++i){
                resztaDzielenia = inputNumber % i;
                if(resztaDzielenia == 0){
                    liczbaJestPierwsza = false;
                    }
                }
            }

        if(liczbaJestPierwsza == true)
            cout << "This is prime number." << endl;

        else
            cout << "This is NOT prime number." << endl;

        return 0;
    }
    else{
    cout << "Provided number is lower then 0." << endl;
    }
}
