//count the amount of the sub-strings(without the single char)
#include<iostream>
#include<string>
#define MAX 10000

using namespace std;

class Solution {
public:
    int countSubstrings(string s) 
    {
        int len=s.size();
        int p=0;
        int q=0;
        int ans=0;

        for(int i=0;i<len;i++)//extend with a single char
        {
            p=i;
            q=i;

            while(p>=0&&q<len&&s[p--]==s[q++])
            {
                ans++;
            }
        }

        for(int i=0;i<len;i++)//extend with two chars
        {
            p=i;
            q=i+1;

            while(p>=0&&q<len&&s[p--]==s[q++])
            {
                ans++;
            }
        }
        
        return (ans-len);//the answer contains the single-char cases which is equal to the length of the string,so the final reslt is ans-len
    }
};

int main(void)
{
	Solution solution;
	
	cout<<"please input a string:";

	char s[MAX] = { 0 };
 	gets(s);

	cout<<"the amount of Subtrings is "<<solution.countSubstrings(s);
} 
