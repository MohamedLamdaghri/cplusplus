//
//  Puerta_NOT.cpp
//  practicasTR
//
//  Created by Mohamed Lamdaghri on 22/05/21.
//  Copyright © 2021 Mohamed Lamdaghri. All rights reserved.
//

#include "Puerta_NOT.hpp"

bool circuito::Puerta_NOT::actualizar()  {
    if (out_pin.calculado) return true;

    if(get_in_pin(0).calculado)
    {
        out_pin.valor = !get_in_pin(0).valor;
        out_pin.calculado = true;
    }
    
    return out_pin.calculado;
}