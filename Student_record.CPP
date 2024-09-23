#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

class students {
    string s_name;
    int s_roll_no;
    int s_fee;
    char s_paid;

public:
   
    students(string name, int roll_no, int fee, char paid) {
        s_name = name;
        s_roll_no = roll_no;
        s_fee = fee;
        s_paid = paid;
    }

    students() {}

    void display_records(vector<string> &n, vector<int> &r, vector<int> &f, vector<char> &p) {
        ofstream outfile;
        outfile.open("students_record.txt", ios::trunc); // Overwrite file
        outfile << "\tNAME\tROLL_NO\tFEE\tPAID(Y/N)" << endl << endl;
        for (int i = 0; i < n.size(); i++) {
            outfile << "\t" << n[i] << "\t" << r[i] << "\t" << f[i] << "\t" << p[i] << endl;
        }
        outfile.close();
    }
};

int main() {
    char choice1;
    int choice, index; 
    string name;
    int roll_no, fee;
    char paid, ch;
    vector<string> names;
    vector<int> roll_nos;
    vector<int> fees;
    vector<char> paids;

    cout << "\t WELCOME TO THE PROGRAM" << endl << endl;

    do {
        cout << "\t 1. ADDING STUDENTS";
        cout << endl << "\t 2. REMOVING STUDENTS";
        cout << endl << "\t 3. UPDATING RECORDS";
        cout << endl << "\t 4. ALL RECORDS";
        cout << endl << endl << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                do {
                    cout << endl << "Enter the name of student: ";
                    cin >> name;
                    names.push_back(name);

                    cout << "Enter the roll no of student: ";
                    cin >> roll_no;
                    roll_nos.push_back(roll_no);

                    cout << "Enter the fee of student: ";
                    cin >> fee;
                    fees.push_back(fee);

                    cout << "Fee is paid or not (Y/N): ";
                    cin >> paid;
                    paids.push_back(paid);

                    cout << endl << "Do you want to add another student (Y/N): ";
                    cin >> ch;
                    cout << endl;
                } while(ch == 'y' || ch == 'Y');
                break;
            }

            case 2: {
                cout << endl << "Enter the roll no of student you want to remove: ";
                cin >> roll_no;
                int i;
                for(i = 0; i < roll_nos.size(); i++) {
                    if(roll_nos[i] == roll_no) {
                        break;
                    }
                }

                if (i == roll_nos.size()) {
                    cout << "Record not found." << endl;
                } else {
                    names.erase(names.begin() + i);
                    roll_nos.erase(roll_nos.begin() + i);
                    fees.erase(fees.begin() + i);
                    paids.erase(paids.begin() + i);
                    cout << endl << "Record Removed Successfully..." << endl;
                }
                break;
            }

            case 3: {
                cout << endl << "Enter the roll no of student you want to update: ";
                cin >> roll_no;
                int i;
                for(i = 0; i < roll_nos.size(); i++) {
                    if(roll_nos[i] == roll_no) {
                        break;
                    }
                }

                if (i == roll_nos.size()) {
                    cout << "Record not found." << endl;
                } else {
                    cout << "Enter new name: ";
                    cin >> name;
                    cout << "Enter new roll_no: ";
                    cin >> roll_no;
                    cout << "Enter new fee: ";
                    cin >> fee;
                    cout << "Fee is paid or not (Y/N): ";
                    cin >> paid;

                    names[i] = name;
                    roll_nos[i] = roll_no;
                    fees[i] = fee;
                    paids[i] = paid;
                    cout << endl << "Record Updated Successfully..." << endl;
                }
                break;
            }

            case 4: {
                students s1; 
                s1.display_records(names, roll_nos, fees, paids);
                cout << "All records have been saved to 'students_record.txt'." << endl;
                break;
            }

            default: {
                cout << endl << "Invalid choice." << endl;
                break;
            }
        }

        cout << endl << "Would you like to go back to the main menu (Y/N): ";
        cin >> choice1;
    } while(choice1 == 'y' || choice1 == 'Y');

    return 0;
}
