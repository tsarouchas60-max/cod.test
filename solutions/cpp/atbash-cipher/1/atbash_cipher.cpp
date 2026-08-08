#include "atbash_cipher.h"
#include <string>
namespace atbash_cipher {

std::string decode(std::string line)
    {
        for(int i=0;i<(int)line.length();i++)
        {
                if(line[i]>='a'&&line[i]<='z')
                    line[i]='z'-line[i]+'a';
                if(line[i]==' ')
                {
                    line=line.substr(0,i)+line.substr(i+1);
                    i--;
                }    
        }
        return line;
    }
std::string encode(std::string line)
    {int k=0;
        for(int i=0;i<(int)line.length();i++)
        {
                if(line[i]>='A'&&line[i]<='Z')
                    line[i]+=32;
                if(line[i]>='a'&&line[i]<='z')
                {   
                    line[i]='z'-line[i]+'a'; 
                if((k%5)==0&&line[i]&&k!=0)
                {
                line=line.substr(0,i)+" "+line.substr(i);
                i++;
                }k++;
                }
                if(line[i]>='0'&&line[i]<='9')
                    k++;
            else if((line[i]<'0')||(line[i]>'9'&&line[i]<'A')||(line[i]>'Z'&&line[i]<'a')||(line[i]>'z'))
                {
                    line=line.substr(0,i)+line.substr(i+1);
                    i--;
                } 
        }
        
        return line;
    }

}  // namespace atbash_cipher
