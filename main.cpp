#include <iostream>
#define TRAIN_SIZE 10
#define MAX_AMOUNT 20

#define TRAIN_INFO(array,func) {int n = 0; for(auto& value: array) { (n) += (func(value)); }\
                            std::cout << n << std::endl;}

bool checkFull(int amount){
    return amount > MAX_AMOUNT;
}
bool checkEmpty(int amount){
    return amount < MAX_AMOUNT;
}

int count(int amount){
    return amount;
}

void fillTrain(int* train){
    std::cout << "Enter the amount of passengers in wagons: " << std::endl;
    for(int i = 0; i < TRAIN_SIZE; i++){
        std::cout << "train[wagon " << i + 1 << "]: ";
        std::cin >> train[i];
    }
}

    int main(){
    std::cout << "23.3 Train" << std::endl;

    int train[TRAIN_SIZE];
    fillTrain(train);

    std::cout << "Overcrowded wagons: ";  TRAIN_INFO(train,checkFull)
    std::cout << "Underfilled wagons: ";  TRAIN_INFO(train,checkEmpty)
    std::cout << "Total passengers: "; TRAIN_INFO(train,count)
    return 0;
}
