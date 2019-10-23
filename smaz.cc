//
// Created by kiosk on 19-10-20.
//

#include <iostream>
#include "../base/decondig.h"
#include "../base/decondig.cc"
int main(){
    std::string c = "Nothing is more difficult, and therefore more precious, than to be able to decide";
   　std::string d;
    deconding::smaz_compress(c.data(),c.size(),&d);
    std::cout << d<< std::endl;
    std::string p ;
    deconding::smaz_decompress(d.data(),d.size(),&p);
    std::cout << p << std::endl;
}

