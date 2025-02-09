// UtilityLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include"clsUtil.h"

int main()
{
    
    clsUtil::Srand();
    cout << clsUtil::RandomNumber(1, 10) << '\n';
    cout << clsUtil::GetRandomCharacter(clsUtil::CapitalLetter) << '\n';
    cout << clsUtil::GenerateWord(clsUtil::MixChars, 14) << '\n';
    cout << clsUtil::GenerateKey(clsUtil::MixChars) << '\n';
    clsUtil::GenerateKeys(8, clsUtil::MixChars);
    int a = 1;
    int b = 2;
    cout << a << " " << b << endl;
    clsUtil::Swap(a, b);
    cout << a << " " << b << endl;
    //swap double
    double c = 1.5;
    double d = 2.5;
    cout << c << " " << d << endl;
    clsUtil::Swap(c, d);
    cout << c << " " << d << endl;
    //swap string
    string s1 = "Mohammed";
    string s2 = "Hammouz";
    cout << s1 << " " << s2 << endl;
    clsUtil::Swap(s1, s2);
    cout << s1 << " " << s2 << endl;
    //swap dates
    clsDate d1(1, 1, 2022);
    clsDate d2(1, 22, 2022);
    cout << d1.DateToString() << " " << d2.DateToString() << endl;
    clsUtil::Swap(d1, d2);
    cout << d1.DateToString() << " " << d2.DateToString() << endl;
    int arr[5] = {1,2,3,4,5};
    clsUtil::ShuffleArray(arr, 5);
    cout << "array after shuffle" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
    int arr2[5];
    clsUtil::FillArrayWithRandomNumbers(arr2,5,20,50);
    cout << "array after fill" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << endl;
    }
    cout << clsUtil::Tabs(5)<<"Text2" << endl;
    string EncryptText, DecryptText;
    
    const short EncryptionKey = 2;
    string Text = "Mohammed Hammouz";
    EncryptText = clsUtil::EncryptText(Text, EncryptionKey);
    
    DecryptText = clsUtil::DecryptText(EncryptText, EncryptionKey);
    
    cout << "Text before encryption:\n";
    cout << Text << endl;
    cout << "Text after encryption:\n";
    cout << EncryptText << endl;
    cout << "Text after decryption:\n";
    cout << DecryptText << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
