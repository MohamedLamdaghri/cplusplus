#include<iostream>
#include <thread>
#include <chrono>

using namespace std;

struct Hilo {
    int valor;
    void f_hilo (int desde, int hasta) {
        std::chrono::milliseconds t {1000};
        for (int i=desde; i<=hasta; ++i) {
            cout << "[Hilo] valor es " << i << endl;
            this_thread::sleep_for(t);
            valor = i;  
            }
        }
}; 
int main () {
Hilo obj;
obj.valor = -99;
cout << "[Main] el valor es " << 
obj.valor << endl;
thread h1 {&Hilo::f_hilo, &obj, 
10, 15};
h1.join();
cout << "[Main] el valor es " << 
obj.valor << endl;
}