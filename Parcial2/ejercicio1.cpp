#include <iostream>
#include <cmath>

using namespace std;

namespace upct
{
    class Point_3D
    {
        long _x;
        long _y;
        long _z;
    public:
        Point_3D (long x, long y, long z) : _x{x}, _y{y}, _z{z} {}
        long get_x() const { return _x; }
        long get_y() const { return _y; }
        long get_z() const { return _z; }
        double distancia(const Point_3D &p) const;
    };

    double Point_3D::distancia(const Point_3D &p) const
    {
        double dx = p._x - _x;
        double dy = p._y - _y;
        double dz = p._z - _z;
        return sqrt(dx*dx + dy*dy + dz*dz);
    }
}


class Sphere
{
    long diam;
    upct::Point_3D _centro;
public:
    Sphere(long _diam, long _x = 0, long _y = 0, long _z = 0) : diam {_diam}, _centro{_x, _y, _z} {}
    long get_diam() { return diam; }
    void set_diam(long _diam) { diam = _diam; }
    double volumen();
    double area();
    friend ostream& operator<< (ostream& os, Sphere& sp);
    bool dentro_esfera(const upct::Point_3D &p);
};

bool Sphere::dentro_esfera(const upct::Point_3D &p)
{
    return p.distancia(_centro) <= diam;
}

double Sphere::volumen() 
{ 
    return M_PI * pow(diam, 3) / 6.0; 
}

double Sphere::area() 
{
     return M_PI * diam * diam; 
}

ostream& operator<< (ostream& os, Sphere& sp)
    {
        os << "Esfera de diametro " << sp.diam << "\n";
        return os;
    }

int main ()
{
    Sphere sp1 = 1, sp2 {10};
    upct::Point_3D punto (1,2,3);
    cout << boolalpha;
    cout << sp1.dentro_esfera(punto) << endl;
    cout << sp1;
    // cout << "Esfera 1: " << sp1 << " | Esfera 2 " << sp2.get_diam() << endl;
    // cout << "Area esfera 1: " << sp1.area() << ", volumen esfera 1: " << sp1.volumen() << endl;
    // sp1.set_diam(100);
    // cout << "Area esfera 1: " << sp1.area() << ", volumen esfera1: " << sp1.volumen() << endl;
    // long d;             
    // cout <<"Introduce el diametro de la esfera numero 3: " <<endl; cin >> d;
    // Sphere sp3{d};
    // cout << "Area esfera 3: " << sp3.area() << ", volumen esfera 3 " << sp3.volumen() << endl;

    return 0;
}