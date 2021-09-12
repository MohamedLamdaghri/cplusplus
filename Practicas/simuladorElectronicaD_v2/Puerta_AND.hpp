//
//  Puerta_AND.hpp
//  practicasTR
//
//  Created by Diego Alonso Cáceres on 24/11/15.
//  Copyright © 2015 Diego Alonso Cáceres. All rights reserved.
//

#ifndef Puerta_AND_hpp
#define Puerta_AND_hpp

#include "Puerta.hpp"

namespace circuito {

    class Puerta_AND : public Puerta {
    public:
        bool actualizar() override ;
        Puerta_AND (const std::string id_puerta_, const int num_entradas = 2) : Puerta (id_puerta_, "AND", num_entradas){};
    };

}

#endif /* Puerta_AND_hpp */
