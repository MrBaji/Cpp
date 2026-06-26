#include <iostream>
using namespace std;

int num_station , num_road;
string name_station[100];
string road_station[100][2];



void BigDash(string name_station[], string road_station[][2], int num_station, int num_road)
{
    for(int i=0 ; i<num_station ; i++)
    {
        int roads = 0;

        for(int j=0 ; j<num_road ; j++)
        {
            if(road_station[j][0] == name_station[i])
            ++roads;
        }

        cout << roads << endl;

        for(int j=0 ; j<num_road ; j++)
        {
            if(road_station[j][0] == name_station[i])
            {
                cout << road_station[j][1] << endl;
            }
        }
    }
}




int main()
{
    

    cin >> num_station >> num_road;

    

    for(int i=0 ; i<num_station ; i++)
    {
        cin >> name_station[i];
    }

    

    for(int i=0 ; i<num_road ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            cin >> road_station[i][j];
        }
    }

    BigDash(name_station, road_station, num_station, num_road);

}