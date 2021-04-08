#include "HW1 P4 task2.h"

Crypto::Crypto() {


    strcpy_s(this->name, 30, "Empty");
    this->lastPrice = 0;
    this->currentPrice = 0;


}
Crypto::Crypto(const char* _name, double _lastPrice, double _currentPrice) {
    strcpy_s(this->name, strlen(_name) + 1, _name);
    this->lastPrice = _lastPrice;
    this->currentPrice = _currentPrice;


}
void Crypto:: setName(const char otherName[30]) {


    strcpy_s(this->name, strlen(otherName) + 1, otherName);

}
char* Crypto:: getName() {
    return this->name;
}
void Crypto:: setLastPrice(double otherLastPrice) {
    this->lastPrice = otherLastPrice;
}
double Crypto:: getLastPrice() {
    return this->lastPrice;
}

void Crypto:: setCurrentPrice(double _currentPrice) {
    this->currentPrice = _currentPrice;
}
double Crypto:: getCurrentPrice() {
    return this->currentPrice;
}
double Crypto:: priceDifference(double currentPrice, double lastPrice) {
    return ((currentPrice - lastPrice) * 100) / currentPrice;
}
void Crypto::print() {
    std::cout << this->name << std::endl;
    std::cout << this->currentPrice << std::endl;
    std::cout << this->lastPrice << std::endl;
    std::cout << priceDifference(currentPrice, lastPrice) << "%" << std::endl;

}


