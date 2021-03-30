
#include "tiny.h"
#include <iostream>

namespace cp3ython {

	Interpreter & Interpreter::operator=(const Interpreter & obj) {
		operandStack_ = obj.operandStack_;
		return *this;
	}

	void Interpreter::loadValue(double val) {
		operandStack_.push(val);
	}

	double Interpreter::printAnswer() {
		double ans = operandStack_.pop();
		std::cout << ans << std::endl;
		return ans;
	}

	void Interpreter::addTwoValues() {
		double first = operandStack_.pop();
		double second = operandStack_.pop();
		sum = first + second;
		operandStack_.push(sum);
	}

	void Interpreter::runCode() {
	
	}

	std::ostream& operator<<(std::ostream & os, const Interpreter & obj) {
    	os << operandStack_.top();
    	return os;
  	}

}