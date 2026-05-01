#include <iostream>
#include "clsUtil.h"

using namespace std;

int main()
{
    srand((unsigned)time(NULL));

    // Get Full Name
    cout<< clsUtil::getFullName("Aubai", "Mahmoud") << endl;

    // Function to check if the number is odd or even
    clsUtil::checkOddEven(10);
    clsUtil::checkOddEven(5);

    // Get Half Number
    cout<< clsUtil::getHalfNumber(4)   << endl;
    cout<< clsUtil::getHalfNumber(0)   << endl;
    cout<< clsUtil::getHalfNumber(-4)  << endl;

    // Max Of 2 Numbers
    cout<< clsUtil::MaxOf2Numbers(1,6) << endl;

    // Swap
    int  a = 5, b = 9;
    cout << "\nBefore Swap : " << a << " | " << b << endl;
    clsUtil::Swap(a,b);
    cout << "After Swap : "    << a << " | " << b << endl;


    string word1 = "A", word2 = "B";
    cout << "\nBefore Swap : " << word1 << " | " << word2 << endl;
    clsUtil::Swap(word1,word2);
    cout << "After Swap : "    << word1 << " | " << word2 << endl;

    // print From 1 To N
    clsUtil::printFrom1ToN(5);
    cout << "====== " << endl;

    // print From N To 1
    clsUtil::printFromNto1(5);

    // Factorial
    cout << clsUtil::Factorial(5) << endl;

    // Power of number
    cout<< clsUtil::PowerOfM(2,4) << endl;

    // Encryption + Decryption
    cout << clsUtil::Encryption("Aubai") << endl;
    cout << clsUtil::Decryption("Cwdck") << endl;

    // Random Number
    cout << clsUtil::RandomNumber(1,5) << endl;

    // Get Random Character
    cout << clsUtil::getRandomChar(enCharTYPE::capitalletter)     << endl;
    cout << clsUtil::getRandomChar(enCharTYPE::smallLetter)       << endl;
    cout << clsUtil::getRandomChar(enCharTYPE::Digit)             << endl;
    cout << clsUtil::getRandomChar(enCharTYPE::specaialCharactar) << endl;

    // Generate Key
    cout << clsUtil::GenerateKey() << endl;

    // Fill array with random numbers then Print array
    int arr[100];
    int length = 10;
    clsUtil::FillArrayElements(arr, length);
    clsUtil::PrintArray(arr,length);

    // Get MAX number in array
    cout << clsUtil::getMaxNumber(arr, length) << endl;

    // Get MIN number in array
    cout << clsUtil::getMinNumber(arr, length) << endl;

    // Get SUM numbers in array
    cout << clsUtil::getSumNumbers(arr, length) << endl;

    // Shuffle array elements
    clsUtil::shuffleArray(arr,length);
    clsUtil::PrintArray(arr,length);

    // Find element in array
    cout<< clsUtil::findNumberPosition(3,arr,length) << endl;

    // Sort array
    clsUtil::SortArray(arr,length);
    clsUtil::PrintArray(arr,length);

    // Upper letters
    string word3 = "aubai";
    cout << clsUtil::UpperLettersOfEachWord(word3) << endl;

    // Lower string
    string word4 = "AUBAI";
    cout << clsUtil::LowerLettersOfEachWord(word4) << endl;

    // Trim left + right + all
    string msg = "Please enter your String:\n";
    string s = clsUtil::getString(msg);

    cout<<"Trimmed left "  << clsUtil::trimLeft(s)  << endl;
    cout<<"Trimmed Right " << clsUtil::trimRight(s) << endl;
    cout<<"Trimmed All "   << clsUtil::trimAll(s)   << endl;

    // Replace word in string
    string originalString = "Welcome to Syria, Syria is a nice country";
    string targetWord = "Syria";
    string newWord = "Germany";

    clsUtil::replaceWordInString(originalString, targetWord, newWord);

    // Convert record to line
    cout<<"please enter client data\n";
    stClient client1;
    client1 = clsUtil::ReadInfo();
    cout << "Client Record\n";
    cout << clsUtil::ConvertRecordToLine(client1) << endl;

    // Convert line to record
    cout<<"please enter client data\n";
    stClient client2;
    client2 = clsUtil::ReadInfo();

    cout<<"\n--------------------------------|Client Line|--------------------------------\n";


    string lineClient = clsUtil::ConvertRecordToLine(client2, " | ");

    cout << lineClient << endl;


    cout<<"\n--------------------------------|Client Record|--------------------------------\n";
    stClient RecordClient;

    RecordClient = clsUtil::ConvertLineToRecord(lineClient, " | ");

    clsUtil::printClientRecord(RecordClient);

    // Add clients to file
    clsUtil::AddNewClients();

    // Read data from file
    vector<stClient> vClients = clsUtil::LoadFromFile(ClientsFileName);

    clsUtil::showAllClients(vClients);

    return 0;
}
