#include "span.hpp"

Span::Span(unsigned int N) : _maxSize(N) {}

void Span::addNumber(int number)
{
    if (_numbers.size() >= _maxSize)
        throw std::overflow_error("Span is full!");
    _numbers.push_back(number);
}

int Span::shortestSpan() const
{
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");

    std::vector<int> tmp = _numbers;
    std::sort(tmp.begin(), tmp.end());

    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < tmp.size(); ++i) {
        int diff = tmp[i] - tmp[i - 1];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}

int Span::longestSpan() const
{
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");

    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());
    return max - min;
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_numbers.size() + std::distance(begin, end) > _maxSize)
        throw std::overflow_error("Not enough space to add all numbers");
    _numbers.insert(_numbers.end(), begin, end);
}