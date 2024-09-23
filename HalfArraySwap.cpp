#include<iostream>
#include<vector>  
using namespace std;

int main(){
    int user;
    cout << "Enter the even number of elements: ";
    cin >> user;

    if(user % 2 != 0) {
        cout << "Please enter an even number!" << endl;
        return 1;  
    }

    vector<int> array1(user);  
    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < user; i++){
        cin >> array1[i];
    }

    vector<int> array2(user);
    for(int i = 0; i < user; i++){
        if(i < user / 2){
            array2[i + user / 2] = array1[i];
        }
        else{
            array2[i - user / 2] = array1[i];
        }
    }

    cout << "Reordered array: ";
    for (int i = 0; i < user; i++){
        cout << array2[i] << "  ";
    }
    cout << endl;

    return 0;
}
