#include <fstream>
#include <iostream>

using namespace std;

int main() {
std::string nombre_fe;
std::cout << "Nombre fichero entrada? ";
getline(std::cin, nombre_fe);
std::ifstream fe {nombre_fe};
if (fe) {
std::string nombre_fs;
std::cout << "Nombre fichero salida? ";
getline(std::cin, nombre_fs); 
std::ofstream fs {nombre_fs};
if (fs) {
std::string msg, aux;
std::cout << "Mensaje? "; // 1 palabra
std::cin >> msg;
do {
getline(fe, aux);
fs << '['<<msg<<"] -> "<<aux<<'\n';
} while (!fe.eof());
} else {
std::cout << "[ERROR]: Fichero '" << nombre_fs << "' no creado\n";
}
} else {
std::cout << "[ERROR]: Fichero '" <<  nombre_fe << "' no encontrado\n";
}
return 0;
}