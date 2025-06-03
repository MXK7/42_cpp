// shortestSpan
// Plus petite différence triée
// 2
// longestSpan
// max - min
// 14
#include "span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl; // doit afficher 2
    std::cout << sp.longestSpan() << std::endl;  // doit afficher 14

    return 0;
}