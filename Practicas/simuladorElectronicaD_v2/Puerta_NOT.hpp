//
//  Puerta_NOT.hpp
//  practicasTR
//
//  Created by Mohamed Lamdaghri  on 22/05/21.
//  Copyright © 2021 Mohamed Lamdaghri. All rights reserved.
//

#ifndef Puerta_NOT_hpp
#define Puerta_NOT_hpp

#include "Puerta.hpp"

namespace circuito {

    class Puerta_NOT : public Puerta {
    public:
        bool actualizar() override;
        Puerta_NOT (const std::string id_puerta_) : Puerta (id_puerta_, "NOT", 1){}; 
    };

}

#endif /* Puerta_NOT_hpp */