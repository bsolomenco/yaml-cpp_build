#if 0
1. yaml-cpp: install
    sudo apt search libyaml-cpp
    sudo apt install libyaml-cpp0.5v5
2. yaml-cpp: clone, build static library, install
    git clone https://github.com/jbeder/yaml-cpp
    mkdir yaml-cpp/build
    cd yaml-cpp/build
3. build test app using yaml-cpp static library
    g++ src/\*.cpp /usr/local/lib/libyaml-cpp.a
    cmake ..        #configure (default static lib)
    make            #build static library by default
    make install    #=> /usr/local/lib/libyaml-cpp.a
#endif
#include "yaml-cpp/yaml.h"
#include <stdio.h>

int main(int argc, char** argv){
    {
        YAML::Node sequence = YAML::Load("[1, 2, 3, 4, 5, 6, 7, 8, 9]");
        printf("sequence [");
        for(size_t i=0; i<sequence.size(); ++i){
            printf("%d, ", sequence[i].as<int>());
        }
        printf("]\n");
    }
    {
        YAML::Node map = YAML::Load("{name: Brewers, bday: 19731128}");
        //printf("map {name:%s, bday:%s}\n", map["name"].as<std::string>().c_str(), map["bday"].as<std::string>().c_str());
        printf("map {name:%s, bday:%d}\n", map["name"].as<std::string>().c_str(), map["bday"].as<int>());
    }
    return 0;
}