//
//  Circuito.hpp
//  practicasTR
//
//  Created by Diego Alonso Cáceres on 24/11/15.
//  Copyright © 2015 Diego Alonso Cáceres. All rights reserved.
//

#ifndef Circuito_hpp
#define Circuito_hpp

#include <vector>
#include <string>
#include <iostream>
#include <initializer_list>

#include "Pins.hpp"
#include "Cable.hpp"

namespace circuito {

    class Circuito {
        std::vector<Out_Pin> pines_iniciales;
        std::vector<Pin> pines_finales;
        std::vector<Cable> cables;
        bool entradas_fijadas = false;
    public:
        Circuito (const int pins_ini, const int pins_fin);
        Out_Pin& get_pin_inicial (const int pos) {
            return pines_iniciales.at(pos);
        };
        Pin& get_pin_final (const int pos) {
            return pines_finales.at(pos);
        };
        bool calcular();
        void mostrar_salidas() ;
        void fijar_entradas (std::initializer_list<bool> lista);
        void add_cable_entre (Pin &entrada_, Out_Pin &salida_);
        void print_cables();
    };

}

#endif /* Circuito_hpp */
