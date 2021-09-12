#include <iostream>
#include <string>
using namespace std;

int main(){
    char str[] = "Tiempo Real";
    for(str; auto& c : str){
        cout << "|" << c <<"|";
    }
    return 0;
}