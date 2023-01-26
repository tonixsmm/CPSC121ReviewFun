# include "vecfuncs.h"

void fillVector(vector<int>& vec){
    int num;

    for (int i = 0; i < 5; i++){
        cout << "Enter a number: ";
        cin >> num;
        vec.push_back(num);
    }
}

// TODO: Define a function that returns the min and max number in a vector. Convert to 3 files format

void findExtreme(vector<int>& vec, int& min, int& max){
    // assume there is at least one value in the vector
    min = max = vec[0];

    for (int i = 0; i < vec.size(); i++){
        if (vec[i] < min){
            min = vec[i];
        }
        if (vec[i] > max){
            max = vec[i];
        }
    }
}