#ifndef UTILS_H
#define UTILS_H
#include <string>
std::string add_binary(std::string a, std::string b){
	/*
	https://www.tutorialspoint.com/program-to-add-two-binary-strings-in-cplusplus
	*/
   std::string result = "";
   int temp = 0;
   int size_a = a.size() - 1;
   int size_b = b.size() - 1;
   while (size_a >= 0 || size_b >= 0 || temp == 1){
      temp += ((size_a >= 0)? a[size_a] - '0': 0);
      temp += ((size_b >= 0)? b[size_b] - '0': 0);
      result = char(temp % 2 + '0') + result;
      temp /= 2;
      size_a--; size_b--;
   }
   return result;
}
#endif