//
//  Cable.cpp
//  practicasTR
//
//  Created by Diego Alonso Cáceres on 24/11/15.
//  Copyright © 2015 Diego Alonso Cáceres. All rights reserved.
//

#include "Cable.hpp"

#include <iostream>

std::ostream& circuito::operator<< (std::ostream &os, const Cable &c) {
    os << c.salida << " <-- " << (c.procesado?"OK":"KO") << " --> " << c.entrada<<std::endl;
    return os;
}
