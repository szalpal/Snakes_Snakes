#pragma once

#include <stdexcept>

class ScriptException :
	public std::runtime_error
{
public:
	ScriptException(const std::string &msg) : runtime_error(msg) {}
	~ScriptException() {}
};

