#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>

namespace cp3ython {

  class Interpreter {
    public:

      class InstructionSet {
        public:
          std::vector<std::unoredered_map<std::string, int>> instructions;
          std::vector<int> operands;
      }
  
      Interpreter & operator=(const Interpreter & obj);  // Custom assignment operator

      void loadValue(double val);
      double printAnswer();
      void addTwoValues();
      void runCode(InstructionSet bytecode);  // TODO

      // An overloaded operator<<, allowing us to print the output via `cout<<`:
      friend std::ostream& operator<<(std::ostream & os, const Interpreter & obj);

    private:
      std::stack<double> operandStack_; 
  };
}