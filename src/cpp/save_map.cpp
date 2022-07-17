#include "util/json.hpp"

#include <vector>
#include <fstream>
#include <string>


using nlohmann::json;

void save_map(unsigned int NResidues, std::vector <std::vector <double>> map, std::vector <std::string> names) {
    json save;
    save["NResidues"] = NResidues;
    save["names"] = names;
    save["map"] = map;
    
    std::fstream file;
    file.open("output/map/map.json", std::ios::trunc | std::ios::out);
    file << std::setw(0) << save;
}
