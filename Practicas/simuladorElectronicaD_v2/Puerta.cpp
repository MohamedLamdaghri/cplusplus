//
//  Puerta.cpp
//  practicasTR
//
//  Created by Diego Alonso Cáceres on 24/11/15.
//  Copyright © 2015 Diego Alonso Cáceres. All rights reserved.
//

#include "Puerta.hpp"

#include <iostream>
#include <string>
#include <sstream>

std::ostream& circuito::operator<< (std::ostream &os, const circuito::Puerta &p) {
    os << "Puerta " << p.tipo_puerta << " (" << p.id_puerta<< ", " << &p << ") ==> ";
    if (p.out_pin.calculado) {
        os << std::boolalpha << p.out_pin.valor;
    } else {
        os << "  NO CALCULADO";
    }
    os<<std::endl;
    for (const auto &i : p.in_pins)
        os << "\t -> " << i << std::endl;
    return os<<std::endl<<std::endl;
}

circuito::Puerta::Puerta (const std::string id_puerta_, const std::string tipo_puerta_, const int num_entradas) :
 in_pins (num_entradas), id_puerta {id_puerta_}, tipo_puerta {tipo_puerta_} {
    out_pin.puerta = this;
    out_pin.calculado = false;
    out_pin.nombre = "Out_Pin (" +id_puerta_+") ";
    for (int i=0; i<num_entradas; ++i) {
        in_pins[i].puerta = this;
        in_pins[i].valor = false;
        in_pins[i].calculado = false;
        std::stringstream ss {"In_Pin ("}; ss << id_puerta_ << ") " << i ;
        in_pins[i].nombre = ss.str();//+ std::to_string(i);
    }
}

