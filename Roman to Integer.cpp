 int romanToInt(string s) {
        unordered_map<char,int> roman;
        roman['I'] = 1; roman['V'] = 5; roman['X'] = 10; roman['L'] = 50; roman['C'] = 100; roman['D'] = 500; roman['M'] = 1000;
        
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
        return num;
    }