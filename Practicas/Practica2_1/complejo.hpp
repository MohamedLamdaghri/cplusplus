#ifndef COMPLEJO_HPP_INCLUDED
#define COMPLEJO_HPP_INCLUDED
#include <iostream>
#include <limits>
#include <string>
#include <sstream>
#include <cmath>
namespace complejos {
    enum class FormatoNumComplejo {realImg, modArg};
    class Complejo {
        double real, img;
        double modulo, argumento;
       
    public:

        Complejo (const double v1=0.0, const double v2=0.0 , const FormatoNumComplejo formato = FormatoNumComplejo::realImg);
        Complejo operator+ (const Complejo &r);
        Complejo operator- (const Complejo &r);
        Complejo operator* (const Complejo &r);
        Complejo operator/ (const Complejo &r);
        Complejo conjugado();
        std::string to_string () const;
        double getReal() const { return real; };
        double getImg()  const { return img; };
        double getMod()  const { return modulo; };
        double getArg()  const { return argumento; };
        void setBinomio(const double real, const double img);
        void setPolar(const double modulo, const double argumento);
    };

    std::ostream& operator<< (std::ostream &os, const Complejo &c);
    std::istream& operator>> (std::istream &is, Complejo &c);
}
#endif // COMPLEJO_HPP_INCLUDED
