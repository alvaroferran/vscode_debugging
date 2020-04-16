#include <iostream>
#include <vector>


int main (int argc, char *argv[]) {
    int size = std::atoi(argv[1]);
    std::vector<int> v;
    for (int i=0; i<size; i++){
        v.push_back(i);
    }
}
