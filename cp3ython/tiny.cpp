
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

	void Interpreter::runCode(InstructionSet bytecode) {

		for(const auto instruction: bytecode.instructions){
			if(instruction.first == "LOAD_VALUE")
				loadValue(bytecode.operands[instruction.second]);
			else if(instruction.first == "ADD_TWO_VALUES")
				addTwoValues();
			else if(instruction.first == "PRINT_ANSWER")
				std::cout<<this<<endl;
		}
	
	}

	std::ostream& operator<<(std::ostream & os, const Interpreter & obj) {
    	os << operandStack_.top();
    	return os;
  	}

}