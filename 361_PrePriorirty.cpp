
#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>
using namespace std;

struct process
{
    int pid;
    int burst_time;
    int arrival_time;
    int priority;
    int remaining_time;
};

struct comparePriority
{
    bool operator()(const process &p1, const process &p2)
    {
        return p1.priority > p2.priority;
    }
};

int main()
{
    int n, current_time = 0, total_waiting_time = 0, total_turnaround_time = 0;
    priority_queue<process, vector<process>, comparePriority> pq;

    cout << "Enter the number of processes: ";
    cin >> n;

    // generate random priority and read in burst and arrival time for each process
    srand(time(NULL));
    for (int i = 1; i <= n; i++)
    {
        process p;
        p.pid = i;
        cout << "Process " << i << ": " << endl;
        cout << "Burst Time: ";
        cin >> p.burst_time;
        cout << "Arrival Time: ";
        cin >> p.arrival_time;
        p.priority = rand() % 10 + 1;
        p.remaining_time = p.burst_time;
        pq.push(p);
    }

    cout << "\nGantt Chart:\n";
    while (!pq.empty())
    {
        process p = pq.top();
        pq.pop();

        if (p.arrival_time > current_time)
        {
            current_time = p.arrival_time;
        }

        cout << "P" << p.pid << "(" << current_time << ")";
        current_time++;

        p.remaining_time--;

        if (p.remaining_time > 0)
        {
            pq.push(p);
        }
        else
        {
            total_waiting_time += current_time - p.arrival_time - p.burst_time;
            total_turnaround_time += current_time - p.arrival_time;
        }
    }

    cout << "\n\nAverage Waiting Time: " << (float)total_waiting_time / n;
    cout << "\nAverage Turnaround Time: " << (float)total_turnaround_time / n;

    return 0;
}

