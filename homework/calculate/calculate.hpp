#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if(command == "add"){
        return std::to_string(first + second);
    }
    else if(command == "substract"){
  	//TODO
    }
    else if(command == "multiply"){
     	//TODO
    }
    else if(command == "divide"){
	//TODO
    }

    return "Invalid data";
}
