//
//  Puerta.hpp
//  practicasTR
//
//  Created by Diego Alonso Cáceres on 24/11/15.
//  Copyright © 2015 Diego Alonso Cáceres. All rights reserved.
//

#ifndef Puerta_hpp
#define Puerta_hpp

#include <string>
#include <iostream>
#include <vector>

#include "Pins.hpp"


namespace circuito {

    class Puerta {
        friend std::ostream& operator<< (std::ostream &os, const Puerta &p);
    protected:
        std::vector<Pin> in_pins;
        Out_Pin out_pin;
        const std::string tipo_puerta;
        const std::string id_puerta;
    public:
        Puerta (const std::string id_puerta_, const std::string tipo_puerta_, const int num_entradas = 2);
        virtual ~Puerta() = default; // pq es clase base
        virtual bool actualizar () = 0;
        int num_pines () { return in_pins.size(); };
        Pin& get_in_pin (int pin) { return in_pins.at(pin); };
        Out_Pin& get_out_pin () { return out_pin; };
        bool puerta_calculada() {return out_pin.calculado; }
        bool valor_salida() { return out_pin.valor; }
    };

}

#endif /* Puerta_hpp */
