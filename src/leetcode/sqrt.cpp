#include <iostream>
#include <assert.h>
#include <cmath>

bool approximate_equal(double a, double b){
    return abs(a - b) < 1e-7;
}
/*
二分法实现根号计算
*/
double sqrt(const double num){
    assert(num >= 0);
    double left{0}, right{num}, ret{0}, ret_2{0};

    while(true){
        ret = (left + right) / 2;
        ret_2 = ret * ret;
        if(approximate_equal(ret_2, num)){
            return ret;
        }else{
            if(ret_2 > num) right = ret;
            else left = ret;
        }
    }
}

double newton_sqrt(const double num){
    assert(num >= 0);
    double ret{num / 2}, ret_2{0};
    while(true){
        ret_2 = ret * ret;
        if(approximate_equal(ret_2, num)){
            return ret;
        }
        else{
            ret = ret - (ret_2 - num) / (2 * ret);
        }
    }
}

float SquareRootFloat(float number)
{
    long i;
    float x, y;
    const float f = 1.5F;

    x = number * 0.5F;
    y  = number;
    i  = * ( long * ) &y;
    i  = 0x5f3759df - ( i >> 1 );  //卡马克
//   i  = 0x5f375a86 - ( i >> 1 );  //Lomont
    y  = * ( float * ) &i;
    y  = y * ( f - ( x * y * y ) );
    y  = y * ( f - ( x * y * y ) );
    return number * y;
}

int main(){
    std::cout << sqrt(4) << std::endl;
    std::cout << sqrt(2) << std::endl;
    std::cout << sqrt(0) << std::endl;
    // std::cout << sqrt(-1) << std::endl;

    std::cout << "================================================================" << std::endl;

    std::cout << newton_sqrt(4) << std::endl;
    std::cout << newton_sqrt(2) << std::endl;
    std::cout << newton_sqrt(0) << std::endl;
    // std::cout << newton_sqrt(-1) << std::endl;

    std::cout << "================================================================" << std::endl;

    std::cout << SquareRootFloat(4) << std::endl;
    std::cout << SquareRootFloat(2) << std::endl;
    std::cout << SquareRootFloat(0) << std::endl;
}
