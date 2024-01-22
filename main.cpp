#include <iostream>
#include <string>
#include <vector>
using namespace std;

void chord(string noteArray[], int firstShift, int secondShift) 
{
    int noteIndex;
    for(int i=0;i<=11;i++) 
    {
        noteIndex = i;
        cout << "Start of iterator " << i << endl;
        cout << noteArray[noteIndex] << endl;
        noteIndex += firstShift;
        cout << noteArray[noteIndex % 12] << endl;
        noteIndex += secondShift;
        cout << noteArray[noteIndex % 12] << endl;
        cout << "End of iterator " << i << endl;
    }
}

//TODO add enum for chord options

int main() 
{
    string notes[12] = {"G#", "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G"};
    char selection;
    cin >> selection; 
    switch (selection) {
        case 'm':
            chord(notes,3,4);
            break;
        case 'A':
            break;
            chord(notes,4,4);
        case 'D':
            chord(notes,3,3);
            break;
        case 'S':
            chord(notes, 2,4);
            break;
        case 's':
            chord(notes, 5,2);
            break;
        case 'M':
            chord(notes,4,3);
            break;
        default:
            cout << "Not a valid option" << endl;
            break;
    }

    return 0;
}