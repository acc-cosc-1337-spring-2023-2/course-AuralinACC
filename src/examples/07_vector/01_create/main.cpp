#include<iostream>
#include<vector>

using std::vector; using std::cout;

int main()
{
    vector<int> nums;//empty list
    cout<<"size: "<<nums.size()<<"\n";
    cout<<"capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(4);
    cout<<"size: "<<nums.size()<<"\n";
    cout<<"capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(10);
    cout<<"size: "<<nums.size()<<"\n";
    cout<<"capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(11);
    cout<<"size: "<<nums.size()<<"\n";
    cout<<"capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(5);
    cout<<"size: "<<nums.size()<<"\n";
    cout<<"capacity: "<<nums.capacity()<<"\n\n";

    nums.push_back(50);
    cout<<"size: "<<nums.size()<<"\n";
    cout<<"capacity: "<<nums.capacity()<<"\n\n";
    
    for(auto n: nums)
    {
        cout<<n<<", ";
    }

    cout<<"\n\n";

    vector<char> letters{'a', 'b', 'c', 'd', 'e', 'f'};
    cout<<"size: "<<letters.size()<<"\n";
    cout<<"capacity: "<<letters.capacity()<<"\n\n";

    vector<char> all_As(10, 'a');
    for(auto ch: all_As)
    {
        cout<<ch<<", ";
    }
    cout<<"\n\n";

    return 0;
}