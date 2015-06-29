#include <vector>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <sys/time.h>
#include <typeinfo>
#include <string>
#include <iostream>
#include <cstddef>
#include <testing.cpp>
using namespace std;

main(){

  evenIsTrue test1(2);
  evenIsTrue test2(3);
  evenIsTrue test3(4);
  evenIsTrue test4(5);

  if(test1.isEven==true){
    cout<<"Working"<<endl;
  }
  else
    cout<<"Error"<<endl;
  if(test2.isEven==false){
    cout<<"Working"<<endl;
  }
  else 
    cout<<"Error"<<endl;
  if(test3.isEven==true){
    cout<<"Working"<<endl;
    }
  else
    cout<<"Error"<<endl;
  if(test4.isEven==false){
    cout<<"Working"<<endl;
  }
  else
    cout<<"Error"<<endl;

  return 0;
}
