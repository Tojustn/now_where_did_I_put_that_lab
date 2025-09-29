#include <string>
#include "where.hpp"

int findInString(const std::string& str, char ch){
      for(size_t i = 0; i < str.size(); ++i){
         if(str[i] == ch){
               return i;
         }
      }
      return -1;
}


int findInString(const std::string& str, const std::string& substr){
      size_t strLen = str.size();
      size_t substrLen = substr.size();
      if(substrLen == 0 || substrLen > strLen){
         return -1;
      }
      for(size_t i = 0; i <= strLen - substrLen; ++i){
         if(str.substr(i, substrLen) == substr){
               return i;
         }
      }
      return -1;
}
