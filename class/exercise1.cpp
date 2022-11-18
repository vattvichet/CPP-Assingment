#include <iostream>
#include <string>
using namespace std;

class Stock
{
private:
    string symbol;
    string name;
    float previousClosingPrice;
    float currentPrice;

public:
    Stock(string sy, string na, float prevPrice, float currPrice)
    {
        symbol = sy;
        name = na;
        previousClosingPrice = prevPrice;
        currentPrice = currPrice;
    }

    void setSymbol(string sy)
    {
        symbol = sy;
    }

    void setName(string na)
    {
        name = na;
    }

    void setPreviousClosingPrice(float preCost)
    {
        previousClosingPrice = preCost;
    }

    void setCurrentPrice(float currCost)
    {
        currentPrice = currCost;
    }

    string getSymbol()
    {
        return symbol;
    }

    string getName()
    {
        return name;
    }

    float getPreviousClosingPrice()
    {
        return previousClosingPrice;
    }

    float getCurrentPrice()
    {
        return currentPrice;
    }

    float getChangePercentage()
    {
        float difference = currentPrice - previousClosingPrice;
        return (difference / previousClosingPrice) * 100.0f;
    }
};

int main()
{
    Stock stock("INTC", "Intel Corporation", 20.5f, 20.35f);
    cout << "\n Price Change Percentage = " << stock.getChangePercentage();
}