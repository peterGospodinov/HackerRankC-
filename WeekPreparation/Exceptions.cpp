#include "pch.h"
#include "Exceptions.h"
#include "format"
using std::string;

std::string IndexOutOfBoundsException::exception()
{
	return "Error: Invalid Index Value";
}