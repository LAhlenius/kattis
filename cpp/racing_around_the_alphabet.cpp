#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <math.h>

using std::string;

int distance_between_chars_cyclic(string const & structure, char const & a, char const & b)
{
  int length = structure.length();
  auto a_pos = structure.find(a);
  auto b_pos = structure.find(b);
  int distance = abs(a_pos-b_pos);

  if(distance > length/2){ //OBS: int comparison
    return (length-distance);
  }else{
    return distance;
  }
}

int main()
{
  int N;
  string aphorism;
  string alphabet{"abcdefghijklmnopqrstuvwxyz '"};

  std::cin >> N;
  while(std::cin >> aphorism){
    auto current_itr = begin(aphorism);
    auto next_itr = current_itr + 1;
    int total_distance{0};
    while(next_itr != end(aphorism)){
       total_distance += distance_between_chars_cyclic(alphabet, *current_itr, *next_itr);
       ++current_itr;
       ++next_itr;
    }
    std::cout << std::to_string(total_distance) << std::endl << std::to_string(N) << std::endl;
  if(!(--N))
    break;
  }
}
