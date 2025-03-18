#include <iostream>
#include <cstdlib>  

#include <ctime>
using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0)));
    int no=rand()%100+1;
    int guess=0, attempt=0;
    cout<<"let's play"<<endl;
    cout<<"Rules"<<endl<<"Guess a number correctly between 1 - 100"<<endl;
    
    while(guess!=no){
        cout<<"enter guess :";
        cin>>guess;
        attempt++;
        if (guess < no) {
            cout << "Too low! Try again." << endl;
        } else if (guess > no) {
            cout << "Too high! Try again." << endl;
        }
    }
    cout<< "Wonderful you have guessed it correct " << no << " in " << attempt << " attempts." << endl;
    return 0;
}

