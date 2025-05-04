#include <iostream>
#include <cstring>
#include <cctype>

/* Fonte: https://devdocs.io/cpp/header/cctype */

bool espacos(const std::string& str);
bool alfabetico(const std::string& str);
bool numerico(const std::string& str);

int main(void) {

    std::string str {};

    std::cout << ">>> ";
    std::getline(std::cin, str);

    printf("String informada: %s\n", str.c_str());

    /* É alfabetico? */
    (alfabetico(str)) ? printf("É alfabetico\n") : printf("Não é alfabetico\n");
    /* É numerico?  */
    (numerico(str)) ? printf("É númerico\n") : printf("Não é númerico\n");
    /* tem espacos? */
    (espacos(str)) ? printf("Tem espacos\n") : printf("nao tem espacos\n");

    return 0;
}

bool espacos(const std::string& str) {
    if(str.empty()) {
        return false;
    }
    for(auto& c : str) {
        if(!std::isspace(c)) {
            return false;
        }
    }

    return true;
}

bool numerico(const std::string& str) {
    if (str.empty()) return false;
    for (auto& c : str) {
        if (!std::isdigit(c)) return false;
    }
    return true;
}

bool alfabetico(const std::string& str) {

    if(str.empty()) {
        return false;
    }

    for(auto& c : str) {
        if(!std::isalpha(c)) {
            return false;
        }
    }

    return true;
}
