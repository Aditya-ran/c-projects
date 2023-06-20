# include <iostream>

int main (){

    // used variables
    int l ; 
    int r;
    int p;
    int s;
    
    // console print statements
    std::cout<<"----------------------------------------"<<'\n';
    std::cout<<"Press 1 to view la liga teams" <<'\n';
    std::cout<<"Press 2 to view Premier league teams : " <<'\n';
    std::cout<<"Press 3 to view Seria A teams : "  <<'\n';
    std::cout<<"----------------------------------------"<<'\n';
    
    //entering the leauge
    std::cout<<"Enter which league to view: " ;
    std::cin>>l;
     
     // name of the leagues and team playing in the league 
    std::string laliga[]={"Real Madrid","Barcelona","Atletico Madrid", "Villareal"};
    std::string PremierLeague[] = {"Manchester United","Liverpool","Chelsea","Manchester City"};
    std:: string SerieA [] = {"Juventus","AC Milan","Inter Milan","Napoli"};

    // conditional checking
    if(l==1){
         for(r=0;r<4;r++) {
             std::cout<<laliga[r];
             std::cout<<'\n';
         }
   }else if (l==2){
         for(p=0;p<4;p++) {
             std::cout<<PremierLeague[p];
             std::cout<<'\n';
         }
   }else { 
       for(s=0;s<4;s++) {
            std::cout<<SerieA[s];
            std::cout<<'\n';
        }
   } 
    return 0;
}
