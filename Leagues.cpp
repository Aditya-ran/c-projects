# include <iostream>

int main (){
    int l ; 
    int r;
    int p;
    int s;
    
    
    std::cout<<"----------------------------------------"<<'\n';
    std::cout<<"Press 1 to view la liga teams" <<'\n';
    std::cout<<"Press 2 to view Premier league teams : " <<'\n';
    std::cout<<"Press 3 to view Seria A teams : "  <<'\n';
    std::cout<<"----------------------------------------"<<'\n';
    
    //entering the leauge 
    std::cout<<"Enter which league to view: " ;
    std::cin>>l;
     
     // now the fucking hard part begins  
    std::string laliga[]={"Real Madrid","Barcelona","Atletico Madrid", "Villareal"};
    if(l = 1){
         for( r =0 ;r<3;r++){
             std::cout<<laliga[r];
         }
   }else if (l=2){
         std::string PremierLeague[] = {"Manchester United","Liverpool","Chelsea","Manchester City",};
         for(p = 0;p<3;p++){
             std::cout<<PremierLeague[p];
         }
   }else { 
        std:: string SerieA [] = {"Juventus","AC milan","Inter Milan","Napoli"};
       for(s = 0 ;s<3;s++){
            std::cout<<SerieA[s];
        }
   } 
    return 0;
}
     
     

