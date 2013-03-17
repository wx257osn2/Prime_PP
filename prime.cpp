#ifndef N
#include<iostream>
int main(){
  std::ios::sync_with_stdio(false);
  std::cout<<
    #include"prime_impl.hpp"
    <<std::endl;
}
#endif

#ifdef PRIME
#undef PRIME
#endif

#ifdef N
#include"decl.hpp"
#endif

