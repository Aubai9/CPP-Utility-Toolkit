#include "clsUtil.h"

string clsUtil::getFullName(string firstName,string lastName)
{
    string fullName = "";
    fullName = firstName  + " " + lastName;
    return fullName;
}


void clsUtil::checkOddEven(int number)
{
    if (number % 2 == 0)
        {
            cout << number << " is an Even number." << endl;
        }
    else
        {
            cout << number << " is an Odd number." << endl;
        }
}

float clsUtil::getHalfNumber(float number)
{

    if(number <= 0)
        {
            return 0;
        }
    return number / 2;
}


int clsUtil::MaxOf2Numbers(int n1, int n2)
{
    if (n1 > n2)
        {
            return n1;
        }
    else
        {
            return n2;
        }
}

void clsUtil::printFrom1ToN(int n)
{
    int i = 1;
    while (i <= n)
        {
            cout << i << endl;
            i++;
        }
}

void clsUtil::printFromNto1(int n)
{
    int i = n;
    while (i >= 1)
        {
            cout << i << endl;
            i--;
        }
}

int clsUtil::Factorial(int n)
{
    int f = 1;
    cout<<"Factorial of: "<< n <<", is ";
    for (int counter = n; counter >= 1; counter--)
        {
            f *= counter;
        }
    return f;
}


int clsUtil::PowerOfM(int number, int power)
{
    if (power == 0)
        {
            return 1;
        }

    int p = 1;
    for (int i = 1; i <= power; i++)
        {
            p *= number;
        }
    return p;
}


string clsUtil::Encryption(string msg, short  key)
{
    cout<<"text before encryption: "<< endl;
    cout << msg << endl;
    for(int i = 0; i<msg.length(); i++)
        {
            int(msg[i])*2;
        }
    cout<<"text After encryption: ";
    for(int  i = 0; i < msg.length(); i++)
        {
            msg[i] = char(int (msg[i]) + key);
        }
    return msg;
}

string clsUtil::Decryption(string msg, short  key)
{
    for(int i = 0; i < msg.length(); i++)
        {
            msg[i] = char(int(msg[i])  - 2);
        }
    return msg;
}

int clsUtil::RandomNumber(int from,int to)
{
    int randnumber = rand()% (to - from + 1)+from;
    return randnumber;
}

char clsUtil::getRandomChar(enCharTYPE charType)
{
    switch(charType)
        {
        case enCharTYPE::smallLetter:
            return char(RandomNumber(97,122));
            break;
        case enCharTYPE::capitalletter:
            return char(RandomNumber(65,90));
            break;
        case enCharTYPE::specaialCharactar:
            return char(RandomNumber(33,47));
            break;
        case enCharTYPE::Digit:
            return char(RandomNumber(48,57));
            break;
        }
    return '\0';
}

string clsUtil::GenerateWord(enCharTYPE CharType, short Length)
{
    string Word;


    for (int i = 1; i <= Length; i++)
        {
            Word = Word + getRandomChar(CharType);
        }
    return Word;
}

string clsUtil::GenerateKey()
{
    string Key = "";


    Key = GenerateWord(enCharTYPE::capitalletter, 4) + "-";
    Key = Key + GenerateWord(enCharTYPE::capitalletter, 4) + "-";
    Key = Key + GenerateWord(enCharTYPE::capitalletter, 4) + "-";
    Key = Key + GenerateWord(enCharTYPE::capitalletter, 4);

    return Key;
}

void clsUtil::FillArrayElements(int arr[],int length)
{
    for(int i = 0; i < length; i++)
        {
            arr[i] = RandomNumber(1,10);
        }

}
void clsUtil::PrintArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }
    cout << endl;
}

int clsUtil::getMaxNumber(int arr[100],int length)
{
    int max = arr[0];
    for(int i=0; i<length; i++)
        {
            if(arr[i] > max)
                max = arr[i];
        }
    return max;
}

int clsUtil::getMinNumber(int arr[100],int length)
{
    int min = arr[0];
    for(int i=0; i<length; i++)
        {
            if(arr[i]<min)
                min = arr[i];
        }
    return min;
}

int clsUtil::getSumNumbers(int arr[100],int length)
{
    int sum = 0;
    for(int i=0; i<length; i++)
        {
            sum +=arr[i];
        }
    return sum;
}

void clsUtil::shuffleArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
        {
            Swap(arr[i], arr[RandomNumber(0, length - 1)]);
        }
}


void clsUtil::SortArray(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
        {
            for (int j = 0; j < length - i - 1; j++)
                {
                    if (arr[j] > arr[j + 1])
                        {
                            Swap(arr[j], arr[j + 1]);
                        }
                }
        }
}

short clsUtil::findNumberPosition(int number,int arr[100],int length)
{
    for(int i = 0; i< length; i++)
        {
            if(arr[i] == number)
                return i;
        }
    return -1;
}

string clsUtil::UpperLettersOfEachWord(string s)
{

    for(short i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ' )

                s[i] = toupper(s[i]);


        }
    return s;
}

string clsUtil::LowerLettersOfEachWord(string s)
{

    for(short i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ')

                s[i] = tolower(s[i]);


        }
    return s;
}


string clsUtil::trimLeft(string s)
{

    for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
                {
                    return s.substr(i);
                }
        }
    return "";
}

string clsUtil::trimRight(string s)
{

    for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
                {
                    return s.substr(0, i + 1);
                }
        }
    return "";
}

string clsUtil::trimAll(string s)
{
    return trimRight(trimLeft(s));
}

string clsUtil::getString(string msg)
{
    string s;
    cout << msg;
    getline(cin, s);
    return s;
}

void clsUtil::replaceWordInString(string orString, string target, string newWord)
{
    cout << "Original string:\n";
    cout << orString << endl;

    int pos = orString.find(target);

    while (pos != string::npos)
        {
            orString.replace(pos, target.length(), newWord);
            pos = orString.find(target,pos + newWord.length());
        }

    cout << "\nString after replacing:\n";
    cout << orString << endl;
}


stClient clsUtil::ReadInfo()
{
    stClient client;

    cout << "Enter Account Number: ";
    getline(cin, client.Account_Number);


    cout << "Enter Pin Code: ";
    getline(cin, client.Pin_Code);

    cout << "Enter Name: ";
    getline(cin, client.Name);

    cout << "Enter Phone: ";
    getline(cin, client.Phone);

    cout << "Enter Account Balance: ";
    cin >> client.Account_Balance;

    cin.ignore(1000, '\n');

    return client;
}

vector <string> clsUtil::splitString(string s, string Delim)
{
    vector <string> vString;
    size_t pos = 0;
    string sWord;


    if (Delim.empty())
        {
            vString.push_back(s);
            return vString;
        }

    while ((pos = s.find(Delim)) != std::string::npos)
        {
            sWord = s.substr(0, pos);
            if (sWord != "")
                {
                    vString.push_back(sWord);
                }
            s.erase(0, pos + Delim.length());
        }

    if (s != "")
        {
            vString.push_back(s);
        }

    return vString;
}

stClient clsUtil::ConvertLineToRecord(string lineClient, string sep)
{
    stClient client;
    vector <string> vClientData = splitString(lineClient, sep);


    if (vClientData.size() >= 5)
        {
            client.Account_Number  = vClientData[0];
            client.Pin_Code        = vClientData[1];
            client.Name            = vClientData[2];
            client.Phone           = vClientData[3];
            client.Account_Balance = stod(vClientData[4]);
        }
    else
        {

            client.Account_Number = "N/A";
            client.Account_Balance = 0;
        }

    return client;
}

string clsUtil::ConvertRecordToLine(stClient client,string sep)
{
    string stClientRecord = "";

    stClientRecord += client.Account_Number + sep;
    stClientRecord += client.Pin_Code + sep;
    stClientRecord += client.Name + sep;
    stClientRecord += client.Phone + sep;
    stClientRecord += to_string(client.Account_Balance);

    return stClientRecord;
}


void clsUtil::printClientRecord(stClient client)
{

    cout << left << setw(20) << "Account Number"  << ": " << client.Account_Number << endl;
    cout << left << setw(20) << "Pin Code"        << ": " << client.Pin_Code << endl;
    cout << left << setw(20) << "Name"            << ": " << client.Name << endl;
    cout << left << setw(20) << "Phone"           << ": " << client.Phone << endl;
    cout << left << setw(20) << "Account Balance" << ": " << client.Account_Balance << endl;

}


void clsUtil::AddDataLineToFile(string FileName, string stDataLine) {
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app);

    if (MyFile.is_open()) {
        MyFile << stDataLine << endl;
        MyFile.close();
    }
}


void clsUtil::AddNewClients() {
    char AddMore = 'Y';
    do {
        cout << "Adding New Client:\n\n";
        stClient Client = ReadInfo();

        AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));

        cout << "\nClient Added Successfully, do you want to add more clients? [Y/N] ";
        cin >> AddMore;

    } while (toupper(AddMore) == 'Y');
}


vector<stClient> clsUtil::LoadFromFile(string fileName) {
    vector<stClient> vClients;
    fstream myFile;
    myFile.open(fileName, ios::in);

    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) {
            stClient client = ConvertLineToRecord(line, " || ");
            vClients.push_back(client);
        }
        myFile.close();
    }
    return vClients;
}


void clsUtil::showAllClients(vector<stClient> vClients) {
    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
    cout << "\n____________________\n" << endl;

    cout << "| " << left << setw(15) << "Account Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";

    cout << "\n____________________\n" << endl;

    for (stClient &Client : vClients) {
        printClientRecord(Client);
        cout << endl;
    }
    cout << "____________________\n" << endl;
}



