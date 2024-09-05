#include <iostream>
#include <bitset>
#include <string>
using namespace std;

void charToBinary(char letter)
{
    bitset<8> binary(letter);
    cout << "Binary Result: " << binary << endl;
}

void intToBinary(int num)
{
    bitset<32> binary(num);
    cout << "Binary Result: " << binary << endl;
}
void floatToBinary(float numfloat)
{
    bitset<32> binary(numfloat);
    cout << "Binary Result: " << binary << endl;
}

int main()
{

    string input;

    cout << "Enter your data to convert into Binary" << endl;
    cin >> input;

    if (input.length() == 1)
    {
        char letter = input[0];
        charToBinary(letter);
    }
    else if (input.length() > 1)
    {
        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == '.')
            {
                float numFloat = stof(input);
                floatToBinary(numFloat);
            }
        }

        int num = stoi(input);
        intToBinary(num);
    }

    return 0;
}