#include <iostream>
#include<iomanip>
using namespace std;
class Array
{
private:
    double m_data[4][4]{};

public:
    double& operator()(int row, int col)
    {

        return m_data[row][col];
    }
};



void main()
{
    srand(time(NULL));
    Array array;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array(i, j) = rand() % 10+1 +rand()%100/100.0;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << setw(7)<<array(i, j);
        }
        cout << endl;
    }


}