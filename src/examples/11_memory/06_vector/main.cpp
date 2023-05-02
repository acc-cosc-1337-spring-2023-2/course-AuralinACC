#include "my_vector.h"

using std::cout;

int main()
{
    Vector<int> nums;
    nums.PushBack(5);
    cout<<nums[0]<<"\n";

    Vector<double> doubles;
    doubles.PushBack(5.5);
    cout<<nums[0]<<"\n";

    Vector<char> chars;
    chars.PushBack('a');
    cout<<"output: "<<chars[0]<<"\n\n";

    return 0;
}
