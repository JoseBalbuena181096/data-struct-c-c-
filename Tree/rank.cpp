#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'getBattery' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY events as parameter.
 */

int getBattery(vector<int> events) {
    int battery = 50;
    if(events.size()>=1 && events.size()<=100000)
    {
        for(auto i=events.begin();i!=events.end();++i)
        {
            
            if((battery+*i) >= 100)
                battery = 100;
            else if((battery+*i) <= -100)
                battery = -100;
            else
                battery += *i;
        } 
    }
    std::cout<<battery;
    return battery;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string events_count_temp;
    getline(cin, events_count_temp);

    int events_count = stoi(ltrim(rtrim(events_count_temp)));

    vector<int> events(events_count);

    for (int i = 0; i < events_count; i++) {
        string events_item_temp;
        getline(cin, events_item_temp);

        int events_item = stoi(ltrim(rtrim(events_item_temp)));

        events[i] = events_item;
    }

    int result = getBattery(events);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}