#include "Puerta_NOT.hpp"
#include <iterator>

bool circuito::Puerta_NOT::actualizar()  {
    if (out_pin.calculado) return true;
    out_pin.calculado = true;
    if(out_pin.valor)
    {
        out_pin.retardo = get_in_pin(0).retardo + r_hl; 
    } else {
        out_pin.retardo = get_in_pin(0).retardo + r_lh; 
    }
    out_pin.valor = !get_in_pin(0).valor;
    return out_pin.calculado;
}
