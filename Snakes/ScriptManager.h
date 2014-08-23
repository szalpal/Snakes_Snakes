#pragma once
#include <vector>
#include <stdlib.h>
#include <string>
#include "boost\python.hpp"
#include <iostream>

class ScriptManager
{
public:
	ScriptManager();
	virtual ~ScriptManager();
	
	/**
	 * Calculates vector of output values according to given script
	 */
	std::vector<double>* calculateOutput(std::vector<double>* input, std::string scriptFileName);
};

