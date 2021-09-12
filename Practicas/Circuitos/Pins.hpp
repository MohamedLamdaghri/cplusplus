//
//  Pins.hpp
//  practicasTR
//
//  Created by Diego Alonso Cáceres on 24/11/15.
//  Copyright © 2015 Diego Alonso Cáceres. All rights reserved.
//

#ifndef Pins_hpp
#define Pins_hpp

#include <string>
#include <iostream>

//#include "Puerta.hpp"
// Esta comentada porque Puerta depende de Out_Pin (la clase, no un puntero a Out_Pin)
//  y tenemos una dependencia circular que resolvemos utilizando una declaración por
//  adelantado. Pero luego en Pins.cpp sí que necesito la definición real de Puerta
// http://stackoverflow.com/questions/553682/when-can-i-use-a-forward-declaration


namespace circuito {
    struct Cable; // definición por adelantado
    class Puerta; // definición por adelantado

    struct Pin {
        bool valor, calculado;
        Puerta *puerta;
        std::string nombre;
        Cable *cable;
        int retardo;
        friend
        std::ostream& operator<< (std::ostream &os, const Pin &p);
    };

    struct Out_Pin : public Pin { };

}

#endif /* Pins_hpp */
