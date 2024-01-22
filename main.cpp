#include <iostream>
#include <string>
#include <vector>
using namespace std;

string Notes[12] = 
{
"G#", "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", 
"F#", "G"
};

void chord(int series[], int firstShift, int secondShift) 
{
    int noteIndex;

    for(int i=0;i<=11;i++) 
    {
        noteIndex = i;
        cout << Notes[noteIndex] << endl;
        noteIndex += firstShift;
        cout << Notes[noteIndex % 12] << endl;
        noteIndex += secondShift;
        cout << Notes[noteIndex % 12] << endl;
        cout << "End of position " << series[i] << endl;
    }
}

int main() 
{
    int series[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    char selection;
    cin >> selection; 
    switch (selection) {
        case 'm':
            chord(series,3,4);
            break;
        case 'A':
            break;
            chord(series,4,4);
        case 'D':
            chord(series,3,3);
            break;
        case 'S':
            chord(series, 2,4);
            break;
        case 's':
            chord(series, 5,2);
            break;
        case 'M':
            chord(series,4,3);
            break;
        default:
            cout << "Not a valid option" << endl;
            break;
    }

    return 0;
}