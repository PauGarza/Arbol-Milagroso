#include <iostream>

int f, r, cont;


int main()
{
    std::cin>>f;

    if(f==0 or f%11==0){
        cont=-1;
    }else{
         while(r!=((f-1)%11)){
        f*=2;
        cont++;
    }
    }

    std::cout<<cont<<std::endl;
    return 0;
}
