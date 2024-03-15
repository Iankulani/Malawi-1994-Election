/*This software prompts the user to enter total number of published centers, 
total number of registered voters, total number of null and void votes, total 
number of valid votes and total valid votes for each candidate. Afterward, 
it determines the candidate with the majority of votes and displays the results on the screen.

NOTE:For a candidate to be a majority winner the candidate total valid votes should be greater than majority.
*/ 
#include<iostream>
using namespace std;
int main(void)
{
system("color A");
cout<<"=============================== MALAWI ELECTORAL COMMISSION ===============================\n\n";
// Declare variables
long long int totalvalidvotesfor_Bakilimuluzi,
totalvalidvotesfor_Hastingsbanda, 
totalvalidvotesfor_Chakufwachihana,
totavalidvotesfor_Kamlepokalua,
majority, 
totalvalidvotes,
totalregisteredvotes, 
totalvotescast, 
nullandvoid,
published_Centers, 
total_Centers;
int percent=100;
float majoritypercent;
/*Get total published centers */
cout<<"Enter Total Published Centers:";
cin>>published_Centers;
cout<<"Enter Total Centers:";
cin>>total_Centers;
// Get the total number of registered votes
cout<<"Enter Total Registered Voters/Turnout Votes:";
cin>>totalregisteredvotes;
// Get the total number of votes casted
cout<<"Enter Total Votes Cast:";
cin>>totalvotescast;
// Get total number of Null_&_Void votes
cout<<"Enter Total Null & Void Votes/Invalid Votes:";
cin>>nullandvoid;
// Get total votes
cout<<"Enter Total Valid Votes:";
cin>>totalvalidvotes; 
// Get total number of votes for Dr Bakili Muluzi
cout<<"Enter Total Valid Votes for Dr Bakili Muluzi:";
cin>>totalvalidvotesfor_Bakilimuluzi;
// Get total number of votes for Dr Hastings Kamuzu Banda
cout<<"Enter Total Valid Votes for  Dr Hastings Kamuzu Banda:";
cin>>totalvalidvotesfor_Hastingsbanda;
// Get total number of votes for Chakufwa Chihana
cout<<"Enter Total Valid Votes for Chakufwa Chihana:";
cin>>totalvalidvotesfor_Chakufwachihana;
// Get total number of votes for Kamlepo Kalua
cout<<"Enter Total Valid Votes for Kamlepo Kalua:";
cin>>totavalidvotesfor_Kamlepokalua;
/*fifty plus one formular to determine the majority winner of an Election
 majority=(totalvalidvotes/2)+1; */
 
majority=(totalvalidvotes/2)+1;
if(totalvalidvotesfor_Bakilimuluzi>majority){
cout<<"Cogratulations  Dr Bakili Muluzi you're the winner of 1994 presidential Election\n\n";
} else if(totalvalidvotesfor_Hastingsbanda>majority){
cout<<"Congratulation Dr Hastings Kamuzu Banda you're the winner of 1994 presidential Election\n\n";
} else if(totalvalidvotesfor_Chakufwachihana>majority){
cout<<"Cogratulations Chakufwa Chihana you're the winner of 1994 presidential Election\n\n";
} else if(totavalidvotesfor_Kamlepokalua>majority){
cout<<"Cogratulations Kamlepo Kalua you're the winner of 1994 presidential Election\n\n";
} 
else 
{
cout<<"No majority winner was found RUNOF may be required Thank you.\n\n";
printf("============================================================================================");
return 0;
}
}