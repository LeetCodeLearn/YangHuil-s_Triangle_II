//
//  main.cpp
//  YangHui's_Triangle_II
//
//  Created by 李佳 on 15/10/28.
//  Copyright © 2015年 LiJia. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> lastRow;
        for (int i = 0; i <= rowIndex; ++i)
        {
            vector<int> resultVec;
            resultVec.push_back(1);
            for (int j = 1; j <= i - 1; ++j)
            {
                resultVec.push_back(lastRow[j - 1] + lastRow[j]);
            }
            if (i != 0)
                resultVec.push_back(1);
            lastRow = resultVec;
        }
        return lastRow;
    }
};

int main(int argc, const char * argv[])
{
    Solution sol;
    vector<int> resultVec = sol.getRow(3);
    return 0;
}
