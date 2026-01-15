#pragma once
#include <string>
#include "Candle.h"
#include <vector>


class CSVReader{
  public:
    static std::vector<Candle> read(const std::string& filename);


};
