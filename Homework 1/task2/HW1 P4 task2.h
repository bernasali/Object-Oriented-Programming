#pragma once

#include <iostream>
#include<cstring>


#include <iostream>
#include <cstring>
#include<string.h>



class Crypto {
private:
    char name[30];
    double lastPrice;
    double currentPrice;
public:

    Crypto();
    Crypto(const char* _name, double _lastPrice, double _currentPrice);

    void setName(const char otherName[30]);
    char* getName();
    void setLastPrice(double otherLastPrice);
    double getLastPrice();
    void setCurrentPrice(double _currentPrice);
    double getCurrentPrice();

    double priceDifference(double currentPrice, double lastPrice);

    void print();
};


