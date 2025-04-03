#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <stdexcept>
#include <vector>

class Span {
    private:
        std::vector<int> _numbers;           // conteneur interne
        unsigned int _maxSize;               // capacité max
    public:
        Span(unsigned int N);                // constructeur
        void addNumber(int number);          // ajoute un nombre
        int shortestSpan() const;            // plus petite différence entre deux nombres
        int longestSpan() const;             // plus grande différence
        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end); // ajout multiple
};

#endif