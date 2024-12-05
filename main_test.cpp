#include <iostream>
#include <stdexcept> // Pour std::exception et std::runtime_error

int divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division par zéro !"); // Lève une exception
    }
    return a / b;
}

int main() {
    try {
        int result = divide(10, 0); // Tentative de division par zéro
        std::cout << "Résultat : " << result << std::endl;
    } 
    catch (const std::exception& e) {
        // Gère l'exception en affichant un message
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    std::cout << "Programme terminé." << std::endl;
    return 0;
}
