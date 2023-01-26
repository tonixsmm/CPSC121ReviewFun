# include "vecfuncs.h"

int main(){
    int min, max;
    vector<int> userNums;

    fillVector(userNums);
    cout << "Vector size: " << userNums.size() << endl;
    findExtreme(userNums, min, max);
    cout << "Min is " << min << " and Max is " << max << endl;
}