#include "HW1 P4 task2.h"

int main()
{
    Crypto c;
    const char* crypto = "Bitcoin";
    c.setName(crypto);
    c.setCurrentPrice(91.904);
    c.setLastPrice(89.904);
    c.priceDifference(91.904, 89.904);

    c.print();


}
