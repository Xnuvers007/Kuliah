#include <iostream>
using namespace std;

const int MaxBinarySize = 8;

struct Stack{
    int items[MaxBinarySize],top;
};

void initStack(Stack &s){
    s.top = -1;
}

void push(Stack &s, int value){
    if (s.top < MaxBinarySize - 1){
        s.items[++s.top] = value;
    }
    else{
        cout << "Stack overflow!" << endl;
    }
}

int pop(Stack &s){
    if (s.top >= 0){
        return s.items[s.top--];
    }
    else{
        cout << "Stack underflow!" << endl;
        return -1;
    }
}

void decimalToBinary(int decimalNumber, Stack &binaryStack){
    while (decimalNumber > 0){
        push(binaryStack, decimalNumber % 2);
        decimalNumber /= 2;
    }

    while (binaryStack.top < MaxBinarySize - 1){
        push(binaryStack, 0);
    }
}

void printBinary(Stack &binaryStack){
    int decimalValue = 0;
    while (binaryStack.top >= 0){
        int bit = pop(binaryStack);
        cout << bit;

        decimalValue = decimalValue * 2 + bit;
    }

    // cout << " = " << decimalValue;
}

int main(){
    int MaxNumbers;

    cout << endl;

    cout << "|=============================|" << endl;
    cout << "| Nama  :   Indra Dwi Aryadi  |" << endl;
    cout << "| NIM   :   211011450468      |" << endl;
    cout << "|=============================|" << endl;

    cout << endl;

    cout << "Enter the number of decimal numbers: ";
    cin >> MaxNumbers;

    int decimalNumbers[MaxNumbers];

    cout << "Enter decimal numbers (separated by space): ";
    for (int i = 0; i < MaxNumbers; i++){
        cin >> decimalNumbers[i];
    }

    cout << "\nDecimal\tBinary\n";

    Stack binaryStack;
    for (int i = 0; i < MaxNumbers; i++){
        initStack(binaryStack);
        cout << decimalNumbers[i] << "\t";
        decimalToBinary(decimalNumbers[i], binaryStack);
        printBinary(binaryStack);
        cout << endl;
    }
    
    return 0;
}
