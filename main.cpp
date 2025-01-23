#include "header.h"

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans(1);
        return ans;
    }
};

int main()
{
    Excecutor<Solution, true> exc("../testcases.txt");
    exc.instance = exc.createInstance<void>();
    REGISTER(Solution, spiralOrder)
    exc.run();
    std::cout << std::endl;
}