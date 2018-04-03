#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class AbstractCombo {
public:
	float precio;
	virtual float costo() = 0;
	virtual string toString() = 0;
	virtual ~AbstractCombo(void);
};