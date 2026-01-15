#include <iostream>
#include "core/CSVReader.h"
#include "market/statistics.h"

int main() {
    int win;
    std::cin>>win;
    auto candles = CSVReader::read("data/sample.csv");

    std::cout << "Candles: " << candles.size() << "\n";
    std::cout << "High: " << Statistics::highesthigh(candles,win) << "\n";
    std::cout << "Low: "  << Statistics::lowestlow(candles,win) << "\n";
    std::cout << "Range: "<< Statistics::marketRange(candles,win) << "\n";

    return 0;
}
