#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <map>
#include "Date.hpp"



class BitcoinExchange {
private:
	std::map<Date, float> _exchangeRates;
public:
	BitcoinExchange();
	~BitcoinExchange();
	void loadExchangeRates();
	float getExchangeRate(const Date&);
	void displayPrices(const char *inputFileName);

};



#endif //BITCOINEXCHANGE_HPP
