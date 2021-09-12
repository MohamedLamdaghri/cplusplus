#include <iostream>
#include <optional>
#include <string>
using Tipo_t = std::optional<std::string>;
Tipo_t a_veces (bool con_string) {
    std::string str {"Tiempo Real"};
    if (con_string) {
        return std::make_optional(str);
    }
    return std::nullopt;
    }
int main() {
    auto val = a_veces(true);
    if(val) {
    std::cout << "String :-) -> " << *val << '\n';
    }
    val.reset();
    val = a_veces(false);
    if(val.has_value()) {
        std::cout << "String :-( -> " << *val << '\n';
    } else {
        std::cout << "No hay valor :-) ";
        std::cout << val.value_or("Valor alternativo\n");
    }
    return 0;
}