#pragma once
#include <iostream>
#include"clsDate.h"
using namespace std;
class clsUtil
{
public:
    enum enCharType {
        SamallLetter = 1, CapitalLetter = 2,
        Digit = 3, MixChars = 4, SpecialCharacter = 5
    };

    static void Srand() {
        srand((unsigned)time(NULL));
    }
    static int RandomNumber(int from, int to) {
        int randnum = rand() % (to - from + 1) + from;
        return randnum;
    }
    static char GetRandomCharacter(enCharType CharType)
    {

        //updated this method to accept mixchars
        if (CharType == MixChars)
        {
            //Capital/Samll/Digits only
            CharType = (enCharType)RandomNumber(1, 3);

        }

        switch (CharType)
        {

        case enCharType::SamallLetter:
        {
            return char(RandomNumber(97, 122));
            break;
        }
        case enCharType::CapitalLetter:
        {
            return char(RandomNumber(65, 90));
            break;
        }
        case enCharType::SpecialCharacter:
        {
            return char(RandomNumber(33, 47));
            break;
        }
        case enCharType::Digit:
        {
            return char(RandomNumber(48, 57));
            break;
        }
    defualt:
        {
            return char(RandomNumber(65, 90));
            break;
        }
        }
    }
    static  string GenerateWord(enCharType CharType, short Length)

    {
        string Word;

        for (int i = 1; i <= Length; i++)

        {

            Word = Word + GetRandomCharacter(CharType);

        }
        return Word;
    }

    static string GenerateKey(enCharType CharType=CapitalLetter) {
        string key = "";
        key = key + GenerateWord(CharType, 4) + "-";
        key = key + GenerateWord(CharType, 4) + "-";
        key = key + GenerateWord(CharType, 4) + "-";
        key = key + GenerateWord(CharType, 4);
        return key;
    }
    static void GenerateKeys( short number, enCharType CharType) {
        for (int i = 1; i <= number; i++) {
            cout << "key[" << i << "] " << GenerateKey(CharType) << endl;
        }
    }
    static  void Swap(int& A, int& B)
    {
        int Temp;

        Temp = A;
        A = B;
        B = Temp;
    }

    static  void Swap(double& A, double& B)
    {
        double Temp;

        Temp = A;
        A = B;
        B = Temp;
    }

    static  void Swap(bool& A, bool& B)
    {
        bool Temp;

        Temp = A;
        A = B;
        B = Temp;
    }

    static  void Swap(char& A, char& B)
    {
        char Temp;

        Temp = A;
        A = B;
        B = Temp;
    }

    static  void Swap(string& A, string& B)
    {
        string Temp;

        Temp = A;
        A = B;
        B = Temp;
    }
    static  void Swap(clsDate& A, clsDate& B)
    {
        clsDate Temp;

        Temp = A;
        A = B;
        B = Temp;
    }
    static void ShuffleArray(int arr[100], int arrlength) {
        for (int i = 0; i < arrlength; i++) {
            swap(arr[RandomNumber(1, arrlength) - 1], arr[RandomNumber(1, arrlength) - 1]);
        }
    }
    static void FillRandomArray1toN(int arr[100], int arrlength) {
        for (int i = 0; i < arrlength; i++) {
            arr[i] = i + 1;
        }
    }
    static void FillArrayWithRandomNumbers(int arr[100], int arrlength, int from, int to) {
        for (int i = 0; i < arrlength; i++) {
            arr[i] = RandomNumber(from, to);
            
        }
    }
    static string  Tabs(short NumberOfTabs)
    {
        string t = "";

        for (int i = 1; i < NumberOfTabs; i++)
        {
            t = t + "\t";
            cout << t;
        }
        return t;

    }
    static string  EncryptText(string Text, short EncryptionKey)
    {

        for (int i = 0; i <= Text.length(); i++)
        {

            Text[i] = char((int)Text[i] + EncryptionKey);

        }

        return Text;

    }

    static string  DecryptText(string Text, short EncryptionKey)
    {

        for (int i = 0; i <= Text.length(); i++)
        {

            Text[i] = char((int)Text[i] - EncryptionKey);

        }
        return Text;

    }

};

