#include <iostream>



/*enum notes {
    DO=1,
    RE=2,
    MI=3,
    FA=4,
    SOL=5,
    LYA=6,
    SI=7
};*/
bool check (std::string combination){
    bool res = true;
    for (int i=0; i< combination.size();i++){
        if (combination[i]<'0' || combination[i]>'7'){
            res= false;
        }
    }
    return res;
}

int main() {
    std::string array_combinations[12];

    for (int i=0; i<12; i++){
        std::cout << "Enter a combination of notes N" <<i+1 << std::endl;
        std::cin >> array_combinations[i];
        while (!check(array_combinations[i])){
            std::cout << " The input is not correct! Try again!";
            std::cin >> array_combinations[i];
        }

    }
    for(int i=0; i<12; i++){
        for(int j=0; j<array_combinations[i].size(); j++){
            if (array_combinations[i][j]== '1') std::cout << "DO ";
            if (array_combinations[i][j]== '2') std::cout << "RE ";
            if (array_combinations[i][j]== '3') std::cout << "MI ";
            if (array_combinations[i][j]== '4') std::cout << "FA ";
            if (array_combinations[i][j]== '5') std::cout << "SOL ";
            if (array_combinations[i][j]== '6') std::cout << "LYA ";
            if (array_combinations[i][j]== '7') std::cout << "SI ";


        }

    }

    return 0;
}
