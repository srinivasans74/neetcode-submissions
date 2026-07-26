class Solution {
public:

    string encode(vector<string>& strs) 
    {
        string cha;
        std::stringstream ch;
        for (string str:strs)
        {

            //ch+=str+"#";

            //ch<<str.size()<<str<<"#";
            ch << str.size() << "#" << str;
        }
    cha=ch.str();
    //std::cout<<cha<<endl;
    return cha;
    }

    vector<string> decode(string s) {
        vector<string>result;
        int i = 0;
        while(i<s.size())
        {
        int delimiter=i;
        while(s[delimiter]!='#')
        {

            delimiter++;
        }    
        //int length= stoi(s.substr(i,delimeter-1));
        int length = stoi(s.substr(i, delimiter - i));
        int string_start=delimiter+1;
        result.push_back(s.substr(string_start,length));
        i=string_start+length;
        }

        return result;

    }
};
