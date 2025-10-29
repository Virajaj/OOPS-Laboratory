#include <iostream>
#include <string>
using namespace std;

class DivisionProgram {
    double num1, num2, result;
    string errorMessage;

public:
    void displayTitle() {
        cout << "==============================================" << endl;
        cout << "      DIVISION PROGRAM USING EXCEPTION HANDLING" << endl;
        cout << "==============================================" << endl;
    }

    void inputNumbers() {
        cout << "\nEnter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

    double performDivision() {
        if (num2 == 0) {
            throw "Division by zero detected! Cannot proceed further.";
        }
        result = num1 / num2;
        return result;
    }

    void showResult() {
        cout << "\nThe division of " << num1 << " and " << num2 << " is: " << result << endl;
    }

    void setError(string msg) {
        errorMessage = msg;
    }

    void showError() {
        cout << "\n" << errorMessage << endl;
    }

    void thankYou() {
        cout << "\n----------------------------------------------" << endl;
        cout << "Thank you for using the Division Program!" << endl;
        cout << "----------------------------------------------" << endl;
    }

    void run() {
        displayTitle();
        inputNumbers();
        try {
            double res = performDivision();
            cout << "\nDivision Successful!" << endl;
            showResult();
        }
        catch (const char *msg) {
            cout << "\nException Occurred!" << endl;
            setError(msg);
            showError();
            cout << "Please enter valid input next time." << endl;
        }
        thankYou();
    }
};

int main() {
    DivisionProgram obj;
    obj.run();

    cout << "\nProgram executed successfully and terminated normally." << endl;
    cout << "==============================================" << endl;
    return 0;
}
