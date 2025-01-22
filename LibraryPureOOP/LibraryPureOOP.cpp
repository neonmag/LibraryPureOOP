#include <iostream>
#include <string>
using namespace std;
#include "AbstractBase.h"
#include "AbstractHuman.h"
#include "IHuman.h"
#include "Visitor.h"


void main() {
	Visitor visitor = Visitor(1, 25, "Ivan", "Ivanov", "Ivanovich");

	cout << visitor;
	cout << visitor.GetAge();
}