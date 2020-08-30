#include <iostream>

typedef long long int long_int;
// This is efficient version of finding exponetionally

long_int give_power(int base,int power){
    if(power == 1){return base;} // Base Conditions
    else if(power <= 0){return 1;}

    long_int result_ = base;
    int pow_inde = 2;
    
    while (pow_inde < power-1){
        result_ = result_ * result_;
        pow_inde *= 2;
    }
    pow_inde = pow_inde/2;
    return result_ * give_power(base,power-pow_inde);
    
}
int main(){
    int test_base = 17;
    int test_power = 6;
    std::cout<<test_base<<"^"<<test_power<<" = "<<give_power(test_base,test_power)<<std::endl;
    return 0;
}
