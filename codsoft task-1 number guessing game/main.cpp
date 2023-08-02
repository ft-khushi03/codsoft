#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    int num, guess, tries = 0;
    srand(time(0));

    num=rand() % 100 + 1;
    cout<< "welcome to the Number Guessing Game" <<endl;

    do
    {
        cout <<"Enter a guess between 1 to 100: ";
        cin >> guess;
        tries++;

        if (guess > num)
            cout<<"Too high!!" <<endl;
        else if (guess<num)
            cout << "Too low!!" <<endl;

        else
            cout<<"Congratulations!! You got it right."<<endl;
    }
    while (guess !=num);

    return 0;
}
