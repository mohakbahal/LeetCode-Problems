class Solution {
public:
    int romanToInt(string s) {
    int out=0,t=1;
    for (int i=0; i<s.length();i++){
        
        if (s[i]=='I'){
            if (s[i+1]=='V'){
                out+=4;
                t=0;
                continue;
            }
            else{
                if(s[i+1]=='X')
                {
                    out+=9;
                    t=0;
                    continue;
                }
                else 
                    out+=1;
                    continue;
                
            }
        }
        if (s[i]=='X'){
            if (s[i+1]=='L'){
                out+=40;
                t=0;
                continue;
            }
            else{
                if(s[i+1]=='C')
                {
                    out+=90;
                    t=0;
                    continue;
                }
                else {
                    if(t==1){
                    out+=10;
                    continue;}
                    else{
                        t=1;
                        continue;
                    }
                }
            }
        }
        if (s[i]=='C'){
            if (s[i+1]=='D'){
                out+=400;
                t=0;
                continue;
            }
            else{
                if(s[i+1]=='M')
                {
                    out+=900;
                    t=0;
                    continue;
                }
                else {
                     if(t==1){
                    out+=100;
                    continue;}
                    else{
                        t=1;
                        continue;
                        }       
                    }
                }
        }
        if (s[i]=='V'){
            if (t==1){
            out+=5;
            continue;
            }
            else{
            t=1;
            continue;
            }
        }
        if (s[i]=='L'){
            if (t==1){
            out+=50;
            continue;
            }
            else{
            t=1;
            continue;
            }
        }
        if (s[i]=='D'){
            if (t==1){
            out+=500;
            continue;
            }
            else{
            t=1;
            continue;
            }
        }
         if (s[i]=='M'){
            if (t==1){
            out+=1000;
            continue;
            }
            else{
            t=1;
            }
        }
    }
        return out;
    }
};