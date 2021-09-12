#include <iostream>
#include <string>
#include <vector>
#include <optional>

using namespace std;


class Libro
{   
    string titulo;
    string autor;
    string id;
    int anyoPublicacion;
    bool prestado;
public:
    Libro(string _titulo, string _autor, string _id, int _anyoPublicacion, bool _prestado = false):
        titulo {_titulo}, autor {_autor}, id {_id}, anyoPublicacion {_anyoPublicacion}, prestado {_prestado} {}

    /* Getters */
    string get_titulo() const { return titulo; }
    string get_autor() const { return autor; }
    string get_id() const { return id; }
    int get_anyo() const { return anyoPublicacion; }
    bool get_prestado() const { return prestado; }

    /*Setters*/
    void set_titulo(string _titulo) { titulo = _titulo; }
    void set_autor(string _autor) { autor = _autor; }
    void set_id(string _id) { id = _id;  }
    void set_anyo(int _anyo) { anyoPublicacion = _anyo; }
    void set_prestado(bool _prestado) { prestado = _prestado; }

    /*Operator*/
    friend ostream& operator<< (ostream &os, const Libro &m)
        {
            bool a = m.prestado;
            string disponible;
            if(a == true)
            { 
                disponible = "P";
            }
            else disponible = "D";

            os << m.titulo << ", " << m.autor << ", " << m.anyoPublicacion << ". [" << m.id << ", " << disponible << "]" ;
            return os;
        }

    bool prestar()
    {
        if(prestado == true)
        {
            return false;
        }
        prestado = true;
        return true;
    }

    bool retornar()
    {
        if(prestado == false)
        {
            return false;
        }
        prestado = false;
        return true;
    }
};

// using Tipo_t = optional<Libro>;

class Biblioteca
{
    vector<Libro> libros;

public:
    bool nuevo_libro(Libro libro)
    {
        if(libros.empty())
        {
            libros.emplace_back(libro);
            return true;
        }
        for(auto &l : libros)
        {
            if (libro.get_id() == l.get_id())
            {
                cout << "Un libro con el mismo identificador ya existe." << endl;
                return false;
            }
        }
        libros.emplace_back(libro);
        return true;
    }

    vector<Libro> buscar_por_titulo(string titulo)
    {
        vector<Libro> buffer;
        for(auto &l : libros)
        {
            if (titulo == l.get_titulo())
            {
                buffer.emplace_back(l);
            }
        }

        return buffer;
    }
    /*No funciona aunque aparentemente hago un buen uso de optional*/
    // Tipo_t prestar_optional(string _id)
    // {
    //    for(auto &l : libros)
    //    {
    //        if(_id == l.get_id())
    //        {
    //            if(l.get_prestado() == false)
    //          {
    //                l.prestar();
    //                return make_optional(l);
    //            }
    //            else {
    //                return nullopt;
    //            }
    //        }
    //    }
    //    return nullopt;
    // }
    bool prestar(string _id)
    {
        for(auto &l : libros)
        {
            if(_id == l.get_id())
            {
                if(l.get_prestado() == false)
                {
                    l.prestar();
                    return true;
                }
                else{
                    cout << "El libro no esta en el almacen" << endl;
                    return false;
                }

            }
        }
        cout << "No se encuentran libros con ese ID" << endl;
        return false;
    }

    bool retornar(string _id)
    {
        for(auto &l : libros)
        {
            if(_id == l.get_id())
            {
                if(l.get_prestado() == true)
                {
                    l.retornar();
                    return true;
                }
                else{
                    cout << "El libro ya esta en el almacen" << endl;
                    return false;
                }

            }
        }
        cout << "No se encuentran libros con ese ID" << endl;
        return false;
    }
};



int main()
{
    Libro libro1 {"Programacion en C++", "Ceballos", "123abc", 2019};
    Libro libro2 {"Otro libro", "Otro autor", "123abc", 2018};
    Libro libro3 {"Programacion en C++", "Ceballos", "000111", 2019};
    Biblioteca libros;
    libros.nuevo_libro(libro1);
    libros.nuevo_libro(libro2);
    libros.nuevo_libro(libro3);
    vector<Libro> libros_mismo_nombre =  libros.buscar_por_titulo("Programacion en C++");
    for(auto &l : libros_mismo_nombre) cout << l << endl;
    cout << boolalpha << libros.prestar("123abc") << endl;
    cout << libros.prestar("123abc") << endl;
    cout << libros.retornar("123abc") << endl;
    cout << libros.retornar("123abc") << endl;
    return 0;
}