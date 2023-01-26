// header file guard code prevents the problem of double inclusion of a header file
// see Gina's video
#ifndef VECFUNCS_H //ifndef = if not defined
#define VECFUNCS_H

#include <iostream>
#include <vector>

using namespace std;

void fillVector(vector<int>&);
void findExtreme(vector<int>&, int&, int&);

#endif