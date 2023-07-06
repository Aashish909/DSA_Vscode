#include <iostream>
using namespace std;

void reachHome(int source, int destination)
{
    cout << " source " << source << " destination " << destination << endl;
    if (source == destination)
    {
        cout << " reach home successfully " << endl;
        return;
    }
    // processing-ek ek step krke aage badhta ja rha
    source++;

    reachHome(source, destination);
}

int main()
{
    int destination = 10;
    int source = 1;

    cout << endl;
    reachHome(source, destination);
}