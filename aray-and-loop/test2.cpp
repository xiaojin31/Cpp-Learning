
#include<iostream>
int main(){
    int M,N;
    int i,j,c=0,s=0;
    std::cout<<"输入M及N："<<std::endl;
    std::cin>>M>>N;
    std::cout<<"\n";
    for(i=M;i<=N;i++)
    {
        int t=0;
        for(j=2;j<i;j++){
            if(i%j==0)
               {t++;
                break;}
        }
        if(t==0){
            c++;
            s+=i;
        }
    }
    std::cout<<M<<"到"<<N<<"的素数个数："<<c<<std::endl;
    std::cout<<"\n"<<"素数和为："<<s<<std::endl;
    return 0;
}
