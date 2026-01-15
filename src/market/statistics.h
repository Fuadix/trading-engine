#pragma once
#include <vector>
#include "../core/Candle.h"


class Statistics{
  public:
    static double highesthigh(const std::vector<Candle>&,int&);
    static double lowestlow(const std::vector<Candle>&,int&);
    static double marketRange(const std::vector<Candle>&,int&);
};
