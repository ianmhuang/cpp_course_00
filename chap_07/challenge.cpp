#include <iostream>
#include <vector>

int main() {

    std::vector <int> vector1 (0);
    std::vector <int> vector2 (0);

    for (int i = 0; i < 2; i++) {
        vector1.push_back(10 * (i + 1));
        std::cout << "vector1[" << i << "] = " << vector1.at(i)<< std::endl;
    }
    std::cout << "The size of vector1 is: " << vector1.size() << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < 2; i ++) {
        vector2.push_back(100 * (i + 1));
        std::cout << "vector2[" << i << "] = " << vector2.at(i) << std::endl;
    }
    std::cout << "The size of vector2 is: " << vector2.size() << std::endl;
    std::cout << std::endl;
    
    std::vector <std::vector<int>> vector_2d (0);
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    for (int i = 0; i < vector1.size(); i++) {
        for (int j = 0; j < vector2.size(); j++) {
            std::cout << "vector2d[" << i << "][" << j << "] =" << vector_2d.at(i).at(j) << std::endl;
        }
    }

    std::cout << std::endl;

    vector1.at(0) = 1000;
    for (int i = 0; i < vector1.size(); i++) {
        for (int j = 0; j < vector2.size(); j++) {
            std::cout << "vector2d[" << i << "][" << j << "] = " << vector_2d.at(i).at(j) << std::endl;
            }
    }

    std::cout << std::endl;
    for (int i = 0; i < 2; i++) {
        vector1.push_back(10 * (i + 1));
        std::cout << "vector1[" << i << "] = " << vector1.at(i)<< std::endl;
    }
    
    return 0;
}