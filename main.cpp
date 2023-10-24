#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>


int main() {
  auto names = std::vector<std::string>{
    "Carlo", "Elisa", "Giulio", "Anita", "Isabella", "Lucia", "Giovanna", "Giancarlo"
  };

  std::ranges::sort(names, std::less<>{}, &std::string::size);
  for(const auto& name : names) std::cout << name << ", ";
  std::cout << std::endl;
}
