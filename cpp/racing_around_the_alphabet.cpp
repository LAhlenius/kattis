#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <math.h>

using std::string;

int distance_between_chars_cyclic(string const & structure, string const & a, string const & b)
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
  auto asd =distance_between_chars_cyclic("abcdefghijklmnopqrstuvwxyz '", "a", "'");
  std::cout << std::to_string(asd) << std::endl;
}
