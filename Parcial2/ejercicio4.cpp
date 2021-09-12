#include <iostream>
#include <string>

using namespace std;

class Book
{
    string Autor;
    string Titulo;
    string Editorial;
    string Fecha;
public:
    Book(string _autor, string _titulo, string _editorial, string _fecha):
        Autor{_autor}, Titulo{_titulo}, Editorial{_editorial}, Fecha{_fecha} {}
    
    friend ostream& operator<< (ostream& os, Book& p)
    {
        os << "El autor  " << p.Autor << "\n"<< 
        "Ha escrito el libro "<< p.Titulo << "\n"<<
        "Tras la editorial " << p.Editorial<< "\n" <<
        "En la fecha " << p.Fecha << endl;
        return os;
    }
};

int main ()
{
    string str1, str2, str3, str4;
    cout << "Introduzca el autor: " << endl;
    getline(cin, str1);
    cout << "Introduzca el titulo: " << endl;
    getline(cin, str2);
    cout << "Introduzca la editorial: " << endl;
    getline(cin, str3);
    cout << "Introduzca la fecha de publicacion: " << endl;
    getline(cin, str4);

    Book libro(str1, str2, str3, str4);
    cout << libro;

    return 0;
}