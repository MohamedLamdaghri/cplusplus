#include <iostream>
#include <string>

using namespace std;
//Que chulada papa!!
int main(){

	string str1 {"Tiempo"}, str2 {"Real"}, str3; //inicializacion un poco rara

	cout<< "1 -> " << str1 << " - " << str2 << endl;
    str3 = str2;
    cout<< "2 -> " << str1 << " - " << str3 << endl;
    str2[0] = 'r';
    cout<< "3 -> " << str1 << " - " << str2 << endl;

    str3[0] = 'r';

    if(str2 == str3){
    	cout << "Son iguales str2 y str3 :p" << endl;
    }

    str3 = str1 + '-' + str2;
    cout<< "4 -> " << str3 << endl;

	return 0;
}