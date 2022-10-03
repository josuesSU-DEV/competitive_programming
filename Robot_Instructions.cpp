#include <iostream>
#include <vector>
using namespace std;

int main(){  
    int num_test_cases;
    cin >> num_test_cases;
    while ( num_test_cases ){
        vector<int> all_movements;
        int num_instructions,pos = 0;;
        cin >> num_instructions;
        
        
        while ( num_instructions ){
            string movement_input;
            cin >> movement_input;
            if (movement_input == "LEFT"){
                pos--;
                all_movements.push_back(-1);
            }
            if (movement_input == "RIGHT"){
                ++pos;
                all_movements.push_back(1);
            }
            else{
                int i;
                cin >> movement_input >> i;
                pos += all_movements[i-1];
                
                all_movements.push_back(all_movements[i-1]);
            }
            num_instructions--;
        }
        cout <<pos<< endl;
        num_test_cases--;
    }
    return 0;
}