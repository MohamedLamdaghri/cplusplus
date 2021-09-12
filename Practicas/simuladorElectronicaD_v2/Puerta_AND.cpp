//
//  Puerta_AND.cpp
//  practicasTR
//
//  Created by Diego Alonso Cáceres on 24/11/15.
//  Copyright © 2015 Diego Alonso Cáceres. All rights reserved.
//

#include "Puerta_AND.hpp"
#include <iterator>

bool circuito::Puerta_AND::actualizar()  {
    if (out_pin.calculado) return true;
    bool salida = true;
    out_pin.calculado = true;
    auto it = std::begin(in_pins);
    do {
        if (it->calculado) {
            salida = salida && it->valor;
            it = std::next(it);
        } else {
            out_pin.calculado = false;
        }
    } while (out_pin.calculado && it!=std::end(in_pins));

    if (out_pin.calculado)
        out_pin.valor = salida;
    return out_pin.calculado;
}
