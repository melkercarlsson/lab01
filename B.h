#pragma once
class A;

#ifndef B_H_
#define B_H_
//Löser redefinition. 
struct B {
  A *a;
  int memberfunction(int x) { 
    return x; }
};
#endif