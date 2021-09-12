#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool comprobarMatricula(const string &matricula)
{
    for(int i=0; i<4 ; i++)
    {
        if(isdigit(matricula[i]) == 0) return false;
    }

    for(int i=4; i<7 ; i++)
    {
        if(isdigit(matricula[i]) != 0) return false;
    }

    return true;
}

int menu(void)
{
    int opcion;
    do
    {
        cout << "Seleccione la operacion que desea realizar:\n1.-Solicitar un plaza de aparcamiento.\n2.-Liberara una plaza de aparcamiento.\n";
        cin >> opcion;
    }while(opcion > 2 || opcion < 1);
    return opcion;
}

bool reservarPlaza(vector<int> plazas, map<string,int> matriculaPlanta)
{
    string matricula;
    cout << "introduzca su matricula: \n";
    cin >> matricula;
    if(comprobarMatricula(matricula) == 0)
    {
        cout << "MAtricula Invalida, lo sentimos";
        return false;
    }
    int planta;
    cout << "Introduzca la planta: \n";
    cin >> planta;
    if(planta > 2 || planta < 0)
    {
        cout << "Numero de planta invalido\n";
        return false;
    }

    if(plazas[planta] < 100)
    {
        plazas[planta]++;
        matriculaPlanta[matricula] = planta;
    }
    else
    {
        return false;
    }
    return true;
}

bool liberarPlaza(vector<int> plazas, map<string,int> matriculaPlanta)
{
    string matricula;
    cout << "introduzca su matricula: \n";
    cin >> matricula;
    if(comprobarMatricula(matricula) == 0)
    {
        cout << "MAtricula Invalida, lo sentimos";
        return false;
    }

    if(matriculaPlanta.count(matricula) != 0)
    {
        plazas[matriculaPlanta[matricula]]--;
        matriculaPlanta.erase(matricula);
        cout << "La plaza se ha librerado correcta.\n";
    }
    else
    {
        cout << "La maatricula no se encuentra en la base de datos.\n";
        return false;
    }
    return true;
}

int main ()
{
    vector<int> plazas {0,0,0};
    map<string,int> matriculaPlanta;
    int opcion = 0;
    opcion = menu();
    if(opcion == 1)
    {
       cout << reservarPlaza(plazas,  matriculaPlanta) << endl;
    }
    else if(opcion == 2)
    {
        cout <<liberarPlaza(plazas,  matriculaPlanta);
    }
    return 0;
}