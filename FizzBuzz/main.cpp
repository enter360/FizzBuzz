//
//  main.cpp
//  FizzBuzz
//
//  Created by Corbin Black on 2/3/14.
//  Copyright (c) 2014 Corbin Black. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


void FizzBuzz(int count){

    for (int i =1; i <= count; i++) {
            // Testing if the number is a multiple of 3 & 5
        if (i%5 == 0 && i%3 == 0) {
            
            cout<<"FizzBuzz"<<endl;
            
            //Testing if the number is a multiple of 3
        }else if (i%3 ==0){
            
            cout<<"Fizz"<<endl;
            
            //Testing if the number is a multiple of 5
        }else if (i%5 == 0){
            cout<<"Buzz"<<endl;
        }else{
            cout<<i<<endl;
        }
        
    }
    
    
    cout<<"Thank you"<<endl;
}


bool ProperReply( char reply){
    
    //cout<<"Proper Reply"<<endl;
    
    if (reply == 'Y' || reply =='y' ) {
        return true;
       // cout<<"Returning true"<<endl;
    }else if ( reply == 'N' || reply == 'n') {
        return false;
      //  cout<<"Returning False"<<endl;
    }
    //cout<<"exiting Proper"<<endl;
    return false;
}

int main(int argc, const char * argv[])
{
    
    int limit;
    char reply;
    bool cont= false;
    
    
    do {
        
        cout<<"What do you want to FizzBuzz to ? "<<endl;
        cin>>limit;
        
        FizzBuzz(limit);
        cout<<"Do you want to FizzBuzz again(Y/N) ? "<<endl;
        cin>>reply;
        
        cont = ProperReply(reply);
        
        
    } while (cont == true);
    
    cout<<"thank you for playing"<<endl;
    
    return 0;
}

