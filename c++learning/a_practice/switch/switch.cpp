#include <iostream> 

using namespace std;

int main(){
    double earth_weight; 
    int planet_num;
    double weight_goal;

    cout << "What is your Earth Weight? ";
    cin >> earth_weight;

    cout << "What planet do you wish to fight on? ";
    cin >> planet_num;

    switch(planet_num){
        case 1:
        weight_goal = earth_weight * 0.38;
        cout << "Your weight goal for Mecury is " << weight_goal << " pounds\n";
        break;

        case 2:
        weight_goal = earth_weight * 0.91;
        cout << "Your weight goal for Venus is " << weight_goal << " pounds\n";
        break;

        case 3:
        weight_goal = earth_weight * 0.38;
        cout << "Your weight goal for Mars is " << weight_goal << " pounds" << endl;
        break;

        case 4:
        weight_goal = earth_weight * 2.34;
        cout << "Your weight goal for Jupiter is " << weight_goal << " pounds" << endl;
        break;

        case 5:
        weight_goal = earth_weight * 1.06;
        cout << "Your weight goal for Saturn is " << weight_goal << " pounds" << endl;
        break;

        case 6:
        weight_goal = earth_weight * 0.92;
        cout << "Your weight goal for Uranus is " << weight_goal << " pounds" << endl;
        break;

        case 7:
        weight_goal = earth_weight * 1.19;
        cout << "Your weight goal for Neptune is " << weight_goal << " pounds" << endl;
        break;

        default:
        cout << "UuuUHhh.. you lost,...buddy?" << endl;
    }
}