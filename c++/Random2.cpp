#include <iostream>
#include <map>
#include <vector>
#include <random>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
    random_device semilla;                      //Semilla de la generarion random.
    default_random_engine motor(semilla());     //Motor de generadores random.
    uniform_int_distribution<> u_d(1, 6);       //Distribucion probabilistica.

    int mean = u_d(motor);                      //numero aleatrorio

    cout << "Randomly-chosen mean: " << mean << endl;

    normal_distribution<int> normal_dist(96, 76); //normal_dist(media, desviacion tipica);

    for(int i = 1 ; i <=100; i ++) 
    {
        cout << "numero aleatorio numero " << i <<": " << normal_dist(motor) << endl;
    }
    

    return 0;
}