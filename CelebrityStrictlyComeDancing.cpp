/*  Programme that calculate the scored mark for RTE Celebrity Dancing Show
    Author: Chun Hin Lam    Class:061CA     */



//Programme
using namespace std;

#include <iostream>
#include <iomanip>

int main(){

    unsigned short judge,celeb,i,e,tn;
    float tscore=0;string cname,winner;
    float max=0,min=6;
    float score=0,avg,winnerscore,fscore;
    //Input judges and celebrities number
    cout<<"\nCelebrity Strictly Come Dancing Show~"<<endl;
    cout<<"_________________________________________________________"<<endl;
do { //Loop for invalid amount of judges enter
    cout<<"\n\n\nPlease enter the amount of Judges(3-6):\t";
    cin>>judge;

        if (judge<3||judge>6){ //output enter again
        cout<<"\n\n\t\t"<<setfill('!')<<setw(75);
        cout<<"\n\t\t!Please Enter Between 3 to 6 judges!"<<endl;
        cout<<"\t\t"<<setfill('!')<<setw(79);}
        else
        cout<<"_________________________________________________________"<<endl;

    }
while (judge<3||judge>6);
do { //Loop for invalid amount of Celebrities enter
    cout<<"\n\nPlease enter the amount of Celebrities(10-15):\t";
    cin>>celeb;
        if (celeb<10||celeb>15){ //output enter again
        cout<<"\n\n\t\t"<<setfill('!')<<setw(89);
        cout<<"\n\t\t!Please Enter Between 10 to 15 Celebrities!"<<endl;
        cout<<"\t\t"<<setfill('!')<<setw(92);}
        else
        cout<<"_________________________________________________________"<<endl;

}
while  (celeb<10||celeb>15);


for (e=1;e<=celeb;e++){ //celebrities loop, for more then one celebrity
        cout<<"\n\n\nPlease enter Celebrity "<<e<<" Name:\t";
        cin.ignore();
        getline(cin,cname,'\n');

    for (i=1;i<=judge;i++){ //judges loop, for more then one judge
float dscore ,mscore;
        do{
            cout<<"\nEnter Score judge "<<i<<":";
            cin>>score;

            //Score rounding up

            unsigned short val1=score/0.1;
            mscore=val1;
            dscore=mscore/10;
             if ((score-(0.05))>=dscore){
                 fscore=dscore+0.1;}
            else {fscore=dscore;}
                      cout<<"\nRounded Up Score:\t"<<fscore<<endl;

            //score rounded up to 1 decimal place
            if (dscore<0||dscore>6){
                cout<<"\n\n\t\t"<<setfill('!')<<setw(75);
                cout<<"\n\t\t!Please Enter Score Between 0 to 6 !"<<endl;
                cout<<"\t\t"<<setfill('!')<<setw(38)<<"\n\n";}

        }

        while (score<0||score>6);
        tscore+=fscore;
            if (dscore>max) //getting the max and the min from all the scores
                max=fscore;
            if (fscore<min)
                min=fscore;

        }
        float finalscore;
        cout<<"\nMax:"<<max<<"\t\t\t\tMin:"<<min;
        finalscore=(tscore-max-min)/(judge-2); //average of what the celebrity got
        cout<<"\nTotal Score:"<<tscore;
        tscore=0;max=0;min=6;score=0; //reset all variable before looping

        cout<<"\nAverage:\t"<<setiosflags(ios::showpoint|ios::fixed)
        <<setprecision(1)<<finalscore;
        cout<<"\n_________________________________________________________"<<endl;

        if (finalscore>max){
                winner=cname;
                winnerscore=finalscore;}
}
//output Winner
cout<<"\nAnd the winnner is:\t"<<endl;
cout<<"\n"<<winner;
cout<<"\n"<<setiosflags(ios::showpoint|ios::fixed)
    <<setprecision(2)<<winnerscore<<endl; //limited to 2 decimal place



return 0;
}















