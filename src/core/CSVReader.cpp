#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include "CSVReader.h"


std::vector<Candle>CSVReader::read(const std::string& filename){
  std::vector<Candle> data;
  std::ifstream file(filename);
  std::string line;

  if (!file.is_open()){
    std::cerr<<"[ERROR]\tfile cannot oppen!";
    return data;
  }

  getline(file,line);
  while(getline(file,line)){
    if(line.empty())continue;
    std::stringstream ss(line);
    Candle c;
    std::string temp;


    getline(file,c.time,',');
    getline(file,temp,',');
    c.open = std::stod(temp);
    getline(file,temp,',');
    c.high = std::stod(temp);
    getline(file,temp,',');
    c.low = std::stod(temp);
    getline(file,temp,',');
    c.close = std::stod(temp);
    data.push_back(c);

  }
  

  return data;
}
