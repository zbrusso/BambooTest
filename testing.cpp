#include <vector>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <sys/time.h>
#include <typeinfo>
#include <string>
#include <iostream>
#include <cstddef>
using namespace std;


class evenIsTrue{
  bool even = true;
  int number = 0;

  evenIsTrue(){}
  evenIsTrue(int num){
    number = num;
  }

  bool isEven(){
    if(number%2==0){
      return true;
    }
    else{
      return false;
    }
  }

}
