#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

 
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






int main(){
	auto candles = readCSV("data/sample.csv");
	std::cout<<"jumlah candle :"<<candles.size()<<"\n";

	for (const auto& c : candles){
		std::cout<<c.time<<" | " << c.open << " "<<c.high<<" "<<c.low<<" "<<c.close<<"\n";

	}
	return 0;
}
