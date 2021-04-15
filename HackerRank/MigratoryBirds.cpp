#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

bool srt(pair<int,int> b ,
pair<int,int> bs){
    return (b.second < bs.second)? true : false;
}

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {
    int birds = 0;
    std::map<int,int> birdsFilter;
    std::vector<std::pair<int,int>> birdsPair;

    for(int i = 0 ; i < arr.size() ; i += 1){
        birdsFilter[arr[i]] +=1;
    }

    for(auto b : birdsFilter){
        birdsPair.push_back({b.first,b.second});
    }

    std::sort(birdsPair.begin(),birdsPair.end(),srt);

    birds = birdsPair.at(birdsPair.size()-1).first;

    for(int i = 0 ; i < birdsPair.size()-1; i +=1){
if(birdsPair.at(i).second >= birdsPair.at(i+1).second){
    birds = birdsPair.at(i).first;
}
else birds = birdsPair.at(i+1).first;
    }

    return birds;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = migratoryBirds(arr);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
