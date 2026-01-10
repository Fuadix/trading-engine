
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
 
struct Candle{
	std::string time;
	float open;
	float high;
	float low;
	float close;
};


std::vector<Candle> readCSV(const std::string& filename){

	std::vector<Candle> data;
	std::ifstream file(filename);
	std::string line;

	if (!file.is_open()){
		std::cerr<<"file not found!!\n";
		return data;
	}
	getline(file,line);//ini akan mengisi satu baris utuh file kedalam line
	while(getline(file,line)){
		std::stringstream ss(line);
		Candle c;//membentuk element array data yang akan di inisialisasi element struct nya di dalam perulangan ini
		std::string temp;

		getline(ss,c.time,',');
		getline(ss,temp,',');
		c.open= std::stod(temp);
		getline(ss,temp,',');
		c.high= std::stod(temp);
		getline(ss,temp,',');
		c.low = std::stod(temp);
		getline(ss,temp,',');
		c.close= std::stod(temp);
		data.push_back(c);

	}
	return data;
}


int safeStartIndex(int dataSize,int window){
	if (dataSize < window) return 0;
	return dataSize - window;
}

void printLastCandles(const std::vector<Candle> &candles,int count){
	int start = safeStartIndex(candles.size(),count);
	for (int i = start;i < candles.size();i++){
		std::cout << candles[i].time << " | " << candles[i].close << std::endl;
	}
}


double highesthigh(const std::vector<Candle>& candles,const int& window){

  int start = (candles.size()<window)?0:candles.size()-window;
  double max = candles[start].high;
  for(int i = start; i < candles.size(); i++){
    if (candles[i].high > max){
      max = candles[i].high;
    }
  }
  return max;
}


double lowestlow(const std::vector<Candle>& candles,const int& window){
  int start = (candles.size()<window)?0:candles.size()-window;
  double min = candles[start].low;
  for(int i = start;i<candles.size();i++){
    if (candles[i].low < min){
      min = candles[i].low;
    }
  }
  return min;
}


double marketRange(const std::vector<Candle>& candles,int &windows){
  return highesthigh(candles,windows)-lowestlow(candles,windows);
}
int main(){
	auto candles = readCSV("data/sample.csv");
	std::cout<<"jumlah candle :"<<candles.size()<<"\n";

	for (const auto& c : candles){
		std::cout<<c.time<<" | " << c.open << " "<<c.high<<" "<<c.low<<" "<<c.close<<"\n";

	}

	int load;
  std::cout << "input range analyzing: ";
	std::cin >> load;
	printLastCandles(candles,load);
  double low = lowestlow(candles,load);
  double max = highesthigh(candles,load);
  std::cout<<"lower low is :" << low <<std::endl;
  std::cout<<"higher high is:" << max << std::endl;
  std::cout<<"range of market is: "<< marketRange(candles,load)*10000<<"pips"<< std::endl;
  
	
	return 0;
}
