// Jonathan Soo
// jonathansoo@csu.fullerton.edu
// @RapidDab
// Partners: @avi1104p

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2 || arguments.empty()) {
    std::cout << "error: you must supply at least one number \n";
    return -1;
  }

  double sum{};
  for (const std::string& argument : arguments) {
    if (argument != arguments[0]) {
      sum += {std::stod(argument)};
    }
  }

  double average{sum / static_cast<double>(arguments.size() - 1)};

  std::cout << "average = " << average << "\n";

  return 0;
}
