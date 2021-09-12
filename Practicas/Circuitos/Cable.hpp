//
//  Cable.hpp
//  practicasTR
//
//  Created by Diego Alonso Cáceres on 24/11/15.
//  Copyright © 2015 Diego Alonso Cáceres. All rights reserved.
//

#ifndef Cable_hpp
#define Cable_hpp

#include <string>
#include <iostream>

#include "Pins.hpp"

namespace circuito {

    struct Cable {
        Pin &entrada;
        Out_Pin &salida;
        bool procesado;

        friend std::ostream& operator<< (std::ostream &os, const Cable &c);
        Cable (Pin &entrada_, Out_Pin &salida_) : entrada(entrada_), salida(salida_) , procesado{false} {};
    };

}

#endif /* Cable_hpp */
