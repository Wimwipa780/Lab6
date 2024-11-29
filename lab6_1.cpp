#include<iostream>
using namespace std;
int num;
int even = 0;
int odd = 0;

int main(){
    cout << "Enter an integer: ";
    cin >> num;
    while(num!=0){
    if(num%2==0){
    even++;
    } 
    else{
    odd++;
    }
    cout << "Enter an integer: ";
    cin >> num;

    }
    cout << "#Even numbers = " << even << endl; 
    cout << "#Odd numbers = " << odd << endl;
    
    return 0;
    
}