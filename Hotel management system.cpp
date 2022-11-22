#include <iostream>
using namespace std;

int main (){
    int quant;
    int choice;
//Quantity of food made today
    int Qrooms =0,Qchole = 0,Qparathe = 0 ,Qnoodles=0,Qlassi=0,Qburger=0;
    // food items sold
    int Srooms=0,Schole=0,Sparathe=0,Snoodles=0,Slassi=0,Sburger=0;
    //Total price of items 
    int Total_rooms=0, Total_chole=0, Total_parathe=0, Total_noodles=0,Total_lassi=0, Total_burger=0;


    cout<<"\n\t Quantity of times we have";
    cout<<"\n Rooms available: ";
    cin>>Qrooms ;
    cout<<"\nQuantiy of chole :" ;
    cin>>Qchole ;
    cout<<"\n Quantity of parathe : ";
    cin>>Qparathe ;
    cout<<"\n Quantity of noodles : ";
    cin>>Qnoodles;
    cout<<"\n Quantity of lassi   : ";
    cin>>Qlassi;
    cout<<"\n Quantity of burger  : ";
    cin>>Qburger;

     
     m:
    cout<<"\n\t\t Please select from the menu options ";
    cout<<"\n\n1) Rooms ";
    cout<<"\n2)  chole";
    cout<<"\n3)  parathe";
    cout<<"\n4)  noodles";
    cout<<"\n5)  lassi ";
    cout<<"\n6)  burger";
    cout<<"\n7)  Information regarding sales and collection ";
    cout<<"\n8)  Exit ";

    cout<<"\n\n Please Enter  your choice ! ";
    cin>> choice ;

    switch (choice)
    {
        case 1:
        cout<<"\n\n Enter the number of rooms you want :" ;
        
        cin>>quant;
        if(Qrooms-Srooms >= quant)
        {
            Srooms=Srooms+quant;
            Total_rooms= (Total_rooms+quant*1200);
            cout<<"\n\n\t\t"<<quant<<"rooms have been alloted to you!";

        }
        else

             cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel ";
             break;

 case 2:
        cout<<"\n\n Enter Chole Quantity :" ;
        
        cin>>quant;
        if(Qchole-Schole>= quant)
        {
            Schole=Schole+quant;
            Total_chole= (Total_chole+quant*250);
            cout<<"\n\n\t\t"<<quant<<"chole is the order!";


        }
        else

             cout<<"\n\tOnly"<<Qchole-Schole<<"chole  reamaing in hotel";
             break;

           
   case 3:
        cout<<"\n\n Enter parathe Quantity :" ;
        
        cin>>quant;
        if(Qparathe-Sparathe>= quant)
        {
            Sparathe=Sparathe+quant;
            Total_parathe= (Total_parathe+quant*60);
            cout<<"\n\n\t\t"<<quant<<"parathe is the order!";


        }
        else

             cout<<"\n\tOnly"<<Qparathe-Sparathe<<"chole  reamaing in hotel";
             break;
        
        case 4:
        cout<<"\n\n Enter Noodles Quantity :" ;
        
        cin>>quant;
        if(Qnoodles-Snoodles>= quant)
        {
            Snoodles=Snoodles+quant;
            Total_noodles= (Total_noodles+quant*80);
            cout<<"\n\n\t\t"<<quant<<"Noodles is the order!";


        }
        else

             cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"Noodles reamaing in hotel";
             break;

             case 5:
        cout<<"\n\n Enter Lassi Quantity :" ;
        
        cin>>quant;
        if(Qlassi-Slassi>= quant)
        {
            Slassi=Slassi+quant;
            Total_lassi= (Total_lassi+quant*50);
            cout<<"\n\n\t\t"<<quant<<"Lassi is the order!";


        }
        else

             cout<<"\n\tOnly"<<Qlassi-Slassi<<"Lassi reamaing in hotel";
             break;

             case 6:
        cout<<"\n\n Enter Burger Quantity :" ;
        
        cin>>quant;
        if(Qburger-Sburger >= quant)
        {
            Sburger=Sburger+quant;
            Total_burger= (Total_burger+quant*90);
            cout<<"\n\n\t\t"<<quant<<"Burger is the order!";


        }
        else

             cout<<"\n\tOnly"<<Qburger-Sburger<<"Burger  reamaing in hotel";
             break;

    case 7 :

    cout<<"\n\t\tDetails of sales and collection ";
    cout<<"\n\nNumber of rooms we had :" <<Qrooms;
    cout<<"\n\n  Number of rooms we gave for rent "<<Srooms;
    cout<<"\n\n Remaining rooms :  "<<Qrooms - Srooms ;
    cout<<"\n\n Total rooms collection for the day :  "<<Total_rooms;


    cout<<"\n\n Number of chole  we had : " <<Qrooms;
    cout<<"\n\n Number of chole  we sold : " <<Srooms;
    cout<<"\n\n Remaining chole  : "<<Qchole - Schole ;
    cout<<"\n\n Total rooms collection for the day :  " <<Total_chole;

    cout<<"\n\n Number of parathe we had : " <<Qparathe  ;
    cout<<"\n\n Number of parathe we sold : " <<Sparathe ;
    cout<<"\n\n Remaining parathe : "<<Qparathe - Sparathe ;
    cout<<"\n\n Total parathe collection for the day : " <<Total_parathe;

    cout<<"\n\n Number  of noodles we had : "<<Qnoodles ;
    cout<<"\n\n Number of noodles of sold : "<<Snoodles ;
    cout<<"\n\n Remaining noodles : "<<Qnoodles - Snoodles ;
    cout<<"\n\n Total noodles collection for the day :  "<<Total_noodles ;

    cout<<"\n\n Number of  lassi we had : "<<Qlassi;
    cout<<"\n\n Number of  lassi of sold : " <<Slassi ;
    cout<<"\n\n Remaining lassi  : "<<Qlassi - Slassi;
    cout<<"\n\n Total lassi collection for the day : "<<Total_lassi ;

    cout<<"\n\n Number of burger we had :"<<Qburger ;
    cout<<"\n\n Number of burger sold : " <<Sburger ;
    cout<<"\n\n Remaining burger : "<<Qburger - Sburger ;
    cout<<"\n\n Total burger collection for the day : "<<Total_burger ;

    case 8:
       exit (0);


       default:
          cout<<"\n Please select the number mentioned above!";
          
        }
            goto m ;

}
    
    
    
    
    
    
    
    
    
    
    

