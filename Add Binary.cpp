[![Capture.png](https://i.postimg.cc/s2C84YYW/Capture.png)](https://postimg.cc/FYGD9JnF)




class Solution {
public:
    string addBinary(string a, string b) {
        long temp1,temp2,sum;
        if(a=="0" && b== "0")
            return "0";
        temp1=std::stoi(a,0,2);
        temp2=std::stoi(b,0,2);
        sum=temp1+temp2;
        string final={};
        while(sum!=0)
        {
            long temp=sum%2;
            final=final+to_string(temp);
            sum/=2;
        }
        reverse(final.begin(),final.end());
        return final;
        }
};
