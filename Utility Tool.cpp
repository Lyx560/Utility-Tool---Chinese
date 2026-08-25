#include<bits/stdc++.h>
using namespace std;

//声明所有函数
void eb(int num);
void a();
void b();
void c();
void d();
void e();
void f();
void g();
void h();
void i();
void j();
void k();
void l();
void m();


//选择选项
int num_choose(){
    while(true){
        int n;
        cout<<"请输入功能：\n1.四则运算 2.进制转换\n3.ASCLL和字符互相转换 4.温度转换\n5.质数判断 6.字符串反转\n7.大小写转换 8.统计字数\n9.统计单词数 10.周长计算\n11.面积计算 12.体积计算\n13.判断闰年 14.退出\n";
        cin>>n;
        if(n > 14 || n < 1){
            cout<<"你输入的数字不是1～18内的数字\n";            
            cin>>n;
            cout<<endl;
        }
        if(n == 14)exit(0);
        else if(n == 1)a();
        else if(n == 2)b();
        else if(n == 3)c();
        else if(n == 4)d();
        else if(n == 5)e();
        else if(n == 6)f();
        else if(n == 7)g();
        else if(n == 8)h();
        else if(n == 9)i();
        else if(n == 10)j();
        else if(n == 11)k();
        else if(n == 12)l();
        else if(n == 13)m();
    }
}

//是否还要继续
void eb(int num){
    cout<<"\n按B返回，按E继续：";
    char choose;
    cin>>choose;
    
    if(choose == 'B'){
        num_choose();
    }
    else if(choose == 'E'){
        if(num == 1){
            a();
        }
        else if(num == 2){
            b();
        }
        else if(num == 3){
            c();
        }
        else if(num == 4){
            d();
        }
        else if(num == 5){
            e();
        }
        else if(num == 6){
            f();
        }
        else if(num == 7){
            g();
        }
        else if(num == 8){
            h();
        }
        else if(num == 9){
            i();
        }
        else if(num == 10){
            j();
        }
        else if(num == 11){
            k();
        }
        else if(num == 12){
            l();
        }
        else if(num == 13){
            m();
        }
    }
    else{
        cout<<"输入错误，请重新输入";
        eb(num);
    }
}

//四则运算
void a(){
    //定义变量
    while(true){
        double aa,ac;
        char ab;
        //输入算式
        cout<<"请输入算式（例：数字 符号（+ - * /） 数字）（一定要用空格隔开！）：";
        cin>>aa>>ab>>ac;
        //输出结果
        if(ab == '+')cout<<aa+ac;
        else if(ab == '-')cout<<aa-ac;
        else if(ab == '*')cout<<aa*ac;
        else if(ab == '/')cout<<aa/ac;
        else {
            cout<<"符号不正确";
        }
        eb(1);
    }
}

//进制转换
void b(){
    while(true){
        int ba,bb;
        cout<<"请输入是多少进制转十进制或者是十进制转多少进制（例：2 10）：";
        cin>>ba>>bb;
        if(ba == 10 && bb <= 36){
            if(bb<10){
                int bn;
                cout<<"请输入数字：";
                cin>>bn;
                vector<int> barr;
                int blen = 0;
                while(bn!=0){
                    barr.push_back(bn%bb);
                    bn/=bb;
                    blen++;
                }for(int bi=blen-1;bi>=0;bi--){
                    cout<<barr[bi];
                }cout<<endl;
            }
            else if(bb>9){
                int bn;
                cout<<"请输入数字：";
                cin>>bn;
                // 输出十进制数n转变为大于九进制数的结果
                vector<int>barr;
                int len = 0;
                while (bn != 0)
                {
                    len++;
                    barr.push_back(bn % bb);
                    bn /= bb;
                }
                // 倒序输出余数，10以内的输出数字，10以上的输出字母
                for (int bi = len; bi >= 1; bi--)
                {
                    if(barr[bi]<10){
                        cout<<barr[bi];
                    }else{
                        cout<<char(barr[bi]+55);
                    }
                }
            }
        }
        else if(bb == 10){
            if(ba <= 36){
                string s;
                cout<<"请输入数字：";
                cin >> s;
                int sum = 0, b = 0;
                for (int i = s.length() - 1; i >= 0; i--)
                {     
                    // 把数字字符和大写字母转换为整数
                    long long num=0;
                    if(s[i]>='A') num=int(s[i]-'A')+10;
                    else num=int(s[i]-'1')+1;
                    sum = sum + num * pow(ba, b);
                    b++;
                }
                cout << sum << endl;
            }
            else{
                cout<<"不是多少进制转十进制或十进制转多少进制或者进制超过32";
            }
        }
        else{
            cout<<"不是多少进制转十进制或十进制转多少进制或者进制超过32";
        }
        eb(2);
    }

}

//ASCLL和字符互转
void c(){
    while(true){
        int cn;
        cout<<"请输入选项：\n1.字符转ASCLL 2.ASCLL转字符";
        cin>>cn;
        if(cn == 1){
            char cs;
            cout<<"请输入字符：";
            cin>>cs;
            cout<<"ASCLL："<<int(cs);
        }
        else if(cn == 2){
            int cnum;
            cout<<"请输入数字：";
            cin>>cnum;
            cout<<"字符："<<char(cnum);
        }
        else{
            cout<<"输入错误，请重新输入\n";
            c();
        }
        eb(3);
    }
}

//温度转换
void d(){
    while(true){
        int dn;
        cout<<"请输入选项：\n1.摄氏度转华氏度 2.华氏度转摄氏度";
        cin>>dn;
        if(dn == 1){
            double dC;
            cout<<"请输入数字：";
            cin>>dC;
            cout<<"华氏度："<<dC*9/5+32;
        }
        else if(dn == 2){
            double dF;
            cout<<"请输入数字：";
            cin>>dF;
            cout<<"摄氏度："<<(dF-32)*5/9;
        }
        else{
            cout<<"输入错误，请重新输入";
        }
        eb(4);
    }
}

//质数判断
void e(){
    while(true){
        int en;
        bool flag = true;
        cout<<"请输入数字：";
        cin>>en;
        for(int i=2;i<=sqrt(en);i++){
            if(en % i == 0){
                cout<<"它不是质数";
                flag = false;
            }
        }
        if(flag){
            cout<<"它是质数";
        }
        eb(5);
    }
}

//字符串反转
void f(){
    while(true){
        string fs;
        cout<<"请输入字符串：";
        cin>>fs;
        reverse(fs.begin(),fs.end());
        cout<<fs;
        eb(6);
    }
}

//大小写转换
void g(){
    while(true){
        int gn;
        string gs;
        cout<<"请输入选项：\n1.转换为大写 2.转换为小写";
        cin>>gn;
        cout<<"请输入字符串";
        cin>>gs;
        if(gn == 1){
            for(int i=0;i<=gs.length();i++){
                cout<<char(toupper(gs[i]));
            }
        }
        else if(gn == 2){
            for(int i=0;i<=gs.length();i++){
                cout<<char(tolower(gs[i]));
            }
        }
        else{
            cout<<"输入错误，请重新输入";
        }
        eb(7);
    }
}

//统计字数
void h(){
    cin.ignore(1024,'\n');
    while(true){
        string hs;
        cout<<"请输入字符串：";
        getline(cin,hs);
        int cnt = 0;
        for(int i=0;i<hs.length();i++){
            if(hs[i] != ' '){
                cnt++;
            }
        }
        cout<<"\n含空格字数："<<hs.length()<<"\n不含空格字数："<<cnt;
        eb(8);
    }
    
}

//统计单词数
void i(){
    cin.ignore(1024,'\n');
    while(true){
        string is;
        cout<<"请输入字符串：";
        getline(cin,is);
        int cnt = 0;
        for(int i=0;i<is.length();i++){
            if(is[i] == ' '){
                cnt++;
            }
        }
        cout<<"\n单词数："<<cnt+1;
        eb(9);
    }
    
}

//周长计算
void j(){
    while(true){
        int ja,jb;
        cout<<"请输入长和宽：";
        cin>>ja>>jb;
        cout<<"周长："<<(ja+jb)*2;
        eb(10);
    }
}

//面积计算
void k(){
    while(true){
        int ka,kb;
        cout<<"请输入长和宽：";
        cin>>ka>>kb;
        cout<<"面积："<<ka*kb;
        eb(11);
    }
}

//体积计算
void l(){
    while(true){
        int la,lb,lc;
        cout<<"请输入长、宽和高：";
        cin>>la>>lb>>lc;
        cout<<"体积："<<la*lb*lc;
        eb(12);
    }
}

//判断闰年
void m(){
    while(true){
        int my;
        cout<<"请输入一个年份：";
        cin>>my;
        if(my % 400 == 0 || (my % 4 == 0 && my % 100 !=0)){
            cout<<"它是闰年";
        }
        else{
            cout<<"它不是闰年";
        }
        eb(13);
    }
}

int main(){
    num_choose();
    return 0;
}
