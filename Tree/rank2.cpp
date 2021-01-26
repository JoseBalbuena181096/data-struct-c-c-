#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'mostActive' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY customers as parameter.
 */

vector<string> mostActive(vector<string> customers) {
    vector<string> strings;
    class customer
    {
        public:
            string  name;
            int count;
            customer(){count=0;}
    };
    vector<customer*> listC; 
    if( customers.size()>=1 &&  customers.size()<=100000)
    {
        for(auto i = customers.begin();i!=customers.end();++i)
        {
            if(listC.size()==0)
            {
                customer* temp = new customer;
                temp->name = *i;
                temp->count += 1;
                listC.push_back(temp);
            }
            else
            {
                bool find = false;
                for(int j = 0; j < listC.size(); j++)
                {
                    if(listC[j]->name == *i)
                    {
                        listC[j]->count += 1;
                        find = true; 
                        break; 
                    }
                }
                if(!find)
                {
                    customer* temp = new customer;
                    temp->name = *i;
                    temp->count += 1;
                    listC.push_back(temp);
                }
            }
        }
        for(int i = 0; i < listC.size(); i++)
        {
            if( (listC[i]->count/customers.size()*100)>=5)
            {
                strings.push_back(listC[i]->name);
                
            }
        }

    }
    return strings;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string customers_count_temp;
    getline(cin, customers_count_temp);

    int customers_count = stoi(ltrim(rtrim(customers_count_temp)));

    vector<string> customers(customers_count);

    for (int i = 0; i < customers_count; i++) {
        string customers_item;
        getline(cin, customers_item);

        customers[i] = customers_item;
    }

    vector<string> result = mostActive(customers);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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