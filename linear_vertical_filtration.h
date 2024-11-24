#ifndef LINEAR_VECTRICAL_FILTRATION_H_
#define LINEAR_VECTRICAL_FILTRATION_H_

#include <vector>

template <class T>
T clamp(T value, T max, T min) {
    if (value > max)
        return max;
    if (value < min)
        return min;
    return value;
}


void getKernell(std::vector<float>* matrix, float sigma = 3.f);
void getRandomImg(std::vector<float>* img, int weight, int height);

std::vector<float> getSequentialOperations(const std::vector<float>& matrix,
const std::vector<float>&img, int weight, int height);
std::vector<float> getParallelOperations(const std::vector<float>& matrix,
const std::vector<float>& img, int weight, int height);


#endif 