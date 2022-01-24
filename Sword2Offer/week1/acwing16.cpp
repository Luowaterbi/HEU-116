class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param s string字符串 
     * @return string字符串
     */
    string replaceSpace(string s) {
        // write code here
        int len=s.size();
        for(int i=0;i<len;i++){
            while(s[i]==' '){
                s.erase(i,1);//把空格那一格删掉 
                s.insert(i,"%20");//加上%20 
                len+=2;//长度+2 
            }
        }
        return s;
    }
};
