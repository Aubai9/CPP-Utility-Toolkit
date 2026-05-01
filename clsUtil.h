#pragma once
#ifndef CLSUTIL_H_INCLUDED
#define CLSUTIL_H_INCLUDED
#include <iostream>
#include <string>
#include <cstdlib>
#include<vector>
#include <iomanip>
#include<fstream>

using namespace std;

const string ClientsFileName = "Clients.txt";

enum  enCharTYPE
{
    smallLetter = 1,
    capitalletter = 2,
    specaialCharactar = 3,
    Digit =4
};

struct stClient
{
    string Account_Number;
    string Pin_Code;
    string Name;
    string Phone;
    double Account_Balance;
};

class clsUtil
{
public:
    static string getFullName(string firstName,string lastName) ;
    static void checkOddEven(int number);
    static float getHalfNumber(float number);
    static int MaxOf2Numbers(int n1, int n2);
    static void Swap(auto &n1, auto &n2)
    {

        auto temp = n1;
        n1 = n2;
        n2 = temp;

    }
    static char getRandomChar(enCharTYPE charType);

    static void printFrom1ToN(int n);
    static void printFromNto1(int n);
    static void shuffleArray(int  arr[100],int length);
    static void SortArray(int arr[], int length);
    static void PrintArray(int arr[100], int length);
    static void FillArrayElements(int arr[100], int length);
    static void replaceWordInString(string orString, string target, string newWord);
    static void printClientRecord(stClient client);
    static void AddNewClients();
    static void AddDataLineToFile(string FileName, string stDataLine);
    static void showAllClients(vector<stClient> vClients);


    static string Encryption(string msg,short  key = 2);
    static string Decryption(string msg,short  key = 2);
    static string UpperLettersOfEachWord(string s);
    static string GenerateKey();
    static string GenerateWord(enCharTYPE CharType, short Length);
    static string LowerLettersOfEachWord(string s);
    static string trimAll(string s);
    static string trimRight(string s);
    static string trimLeft(string s);
    static string getString(string msg);
    static string ConvertRecordToLine(stClient client,string sep = " || ");

    static int Factorial(int n);
    static int PowerOfM(int number, int power);
    static int RandomNumber(int from, int to);
    static int getMaxNumber(int arr[100], int length);
    static int getMinNumber(int arr[100], int length);
    static int getSumNumbers(int arr[100], int length);
    static short findNumberPosition(int number,int arr[100],int length);

    static stClient ReadInfo();
    static stClient ConvertLineToRecord(string lineClient, string sep = " | ");

    static vector <string> splitString (string s, string Delim = " | ");
    static vector<stClient> LoadFromFile(string fileName);
};

#endif
