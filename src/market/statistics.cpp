#include "statistics.h"

double Statistics::highesthigh(const std::vector<Candle>& candles,int& windows){
    if (candles.empty()) return 0.0;
    int start = (candles.size()<windows)?0:candles.size()-windows;
    double max = candles[start].high;
    for (int i = start;i < candles.size();i++)
    {
      if(candles[i].high > max){
        max = candles[i].high;
      }

    }
    return max;
}

double Statistics::lowestlow(const std::vector<Candle>& candles,int& windows){

    if (candles.empty()) return 0.0;
    int start = (candles.size()<windows)?0:candles.size()-windows;
    double min = candles[start].low;
    for (int i = start; i < candles.size();i++){
      
      if (candles[i].low < min){
        min = candles[i].low;
      }

    }
    return min;
}


double Statistics::marketRange(const std::vector<Candle>& candles,int& windows){
  if (candles.empty()) return 0.0;
  return highesthigh(candles,windows)-lowestlow(candles,windows);

}
