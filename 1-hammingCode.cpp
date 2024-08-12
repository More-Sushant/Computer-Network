#include "iostream" // # is called as preprocessor
#include "string"

using namespace std;

int main()
{
    // declaring required array and variables
    int dataIn[8];
    int dataOut[8];
    int p1, p2, p4, n = 7;

    // taking input for hamming code
    // it includes databits and parrity bit in it 
    for (int i = 1; i <= 7; i++)
    {
        cin >> dataIn[i];
    }

    // performing xor operation among bits.
    p1 = dataIn[1] ^ dataIn[3] ^ dataIn[5] ^ dataIn[7];
    p2 = dataIn[2] ^ dataIn[3] ^ dataIn[6] ^ dataIn[7];
    p4 = dataIn[4] ^ dataIn[5] ^ dataIn[6] ^ dataIn[7];


    // calculating the combined value --> Binary to Decimal
    int c = p1 * 1 + p2 * 2 + p4 * 4;


    // copping the initial array
    for (int i = 1; i <= 7 ; i++)
    {
        dataOut[i] = dataIn[i];
    }


    // changing the receivers bit  
    if (dataIn[c] == 0 )
    {
        dataOut[c] = 1;
    }
    else
    {
        dataOut[c] = 0;
    }


    // display the changes in existing and modified term
    for(int i = 1; i <= 7; i++)
    {
        cout << dataIn[i] << " ";
    }
    cout << endl;
    for(int i = 1; i <= 7; i++)
    {
        cout << dataOut[i] << " ";
    }

    return 0; 
}