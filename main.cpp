#include "solution.h"
int main(int argc, char* argv[]){
    unordered_set<std::string> file;
    std::string line;
    file.clear();
    std::ifstream infile( "dictionary.txt", std::ios_base::in);
    while (getline(infile, line, '\n'))
    {
        file.insert(line);
    }
    std::cout << "Read " << file.size() << " lines.\n";
    vector<vector<string>> ans;
    std::string firstw, secondw;
    std::cout<<"Please enter first word\n";
    std::cin >> firstw;
    std::cout<<"Please enter seoncd word\n";
    std::cin>>secondw;
    ans = findLadders(firstw, secondw,file );
    for (auto i : ans[0])
        std::cout << i << ' ';
    std::cout << '\n'<<"length of shortest way:"<<' '<<ans[0].size()<<' ';
    return 0;
}