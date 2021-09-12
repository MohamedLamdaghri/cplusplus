#include "complejo.hpp"

using namespace complejos;

        Complejo Complejo::operator+ (const Complejo &r) {
            Complejo t {real+r.real, img+r.img};
            return t;
        }

        Complejo Complejo::operator- (const Complejo &r) {
            Complejo t {real-r.real, img-r.img};
            return t;
        }

        Complejo Complejo::operator* (const Complejo &r) {
            Complejo t {modulo*r.modulo, argumento+r.argumento, complejos::FormatoNumComplejo::modArg};
            return t;
        }

        Complejo Complejo::operator/ (const Complejo &r) {
            Complejo t {modulo/r.modulo, argumento-r.argumento, complejos::FormatoNumComplejo::modArg};
            return t;
        }

        std::string Complejo::to_string () const {
            std::stringstream tmp;
            tmp << '(' << real << ", " << img << "i)";
            return tmp.str();
        }

        std::ostream& complejos::operator<< (std::ostream &os, const Complejo &c)
        {
            os << c.to_string ();
            return os;
        }

        std::istream& complejos::operator>> (std::istream &is,  Complejo &c)
        {
            double v1, v2;
            is >> v1;
            is >> v2;

            c.setBinomio(v1, v2);

            return is;
        }

        Complejo::Complejo (const double v1, const double v2, const FormatoNumComplejo formato = FormatoNumComplejo::realImg)
        {
            switch (formato)
            {
                case FormatoNumComplejo::realImg:
                    setBinomio(v1, v2);
                    break;
                case FormatoNumComplejo::modArg:
                    setPolar(v1, v2);
                    break;
            }     
        }

        Complejo Complejo::conjugado()
        {
            return Complejo {real, -img};
        }
        void Complejo::setBinomio(const double real, const double img)
        {
            this->real = real;
            this->img = img;
            modulo = std::hypot(real, img);
            argumento = std::atan2(img, real);
        }
        void Complejo::setPolar(const double modulo, const double argumento)
        {
            this->modulo = modulo;
            this->argumento = argumento;
            real = modulo * cos(argumento);
            img = modulo * sin(argumento);
        }