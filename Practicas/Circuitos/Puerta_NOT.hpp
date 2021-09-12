#ifndef PUERTA_NOT_HPP_INCLUDED
#define PUERTA_NOT_HPP_INCLUDED

#include "Puerta.hpp"

namespace circuito {

    class Puerta_NOT : public Puerta {
    public:
        bool actualizar() override ;
        Puerta_NOT (const std::string id_puerta_, const int hl, const int lh) : Puerta (id_puerta_, "NOT", hl, lh, 1){};
    };

}

#endif // PUERTA_NOT_HPP_INCLUDED
