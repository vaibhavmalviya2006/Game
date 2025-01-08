#include<iostream>
#include<cstdlib>//random number library.
#include <ctime>
using namespace std;
int main(){
    int n;
    srand(time(0));
    int r = 1 + (rand() % 100);// guess any renddom number between 1-100 .
    int attempt= 0;
    
    do{
        cout<<"Guess any number between 1-100 :- ";
        cin>>n;
        attempt++;

        if(n>100){
            cout<<"OOPS Wrong Number please guessed the number between 1-100 :"<<endl;
        }

        else if(n>r){
            cout<<"The number is to high "<<endl;
        }
        else if (n<r)
        {
            cout<<"The number is to low "<<endl;
        }
        else{
            cout<<"WoW you guessed Right !";
            break;
        }
        

    }

    while(n!=r);

   
    
}

