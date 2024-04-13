// CRICKET PROJECT

#include <math.h>
#include <stdio.h>

void bowling();
void batting();

int main() {
  int choice;
  char a[50];
  printf("\n");
  printf("PLAYER NAME : ");    //enter player name
  scanf("%s",a);
  printf("\n");
  printf("ENTER 1 FOR BOWLING STATS , 2 FOR BATTING STATS : "); //choose 1 or 2 and enter it 
  scanf("%d",&choice);
  if (choice==1)
  {
    bowling();  //calling the bowling function
  }
  else if(choice==2)
  {  
    batting();  //calling the batting function
  }
  else
  {  printf("INVALID INPUT -- ENTER EITHER 1 OR 2");} /*choose correct input*/
  
  return 0;
}

void bowling() //function definition 
{
  long int rc, wt, bb,rc1, wt1, bb1,rc2, wt2, bb2,m,m1,m2;
  float ba,ba1,ba2,bs,bs1,bs2,ber,ber1,ber2,a,b,c,a1,b1,c1,a2,b2,c2;
  printf("\n \n");
  printf("PLAYER DETAILS IN - \n \n");      //input
  printf("ODI CAREER :\n");
  printf("ENTER NO. OF MATCHES PLAYED\n: ");
  scanf("%ld",&m);
  printf("ENTER NO. OF BALLS BOWLED BY THE PLAYER\n: ");
  scanf("%ld", &bb);
  printf("ENTER NO. OF WICKETS TAKEN BY THE PLAYER\n: ");
  scanf("%ld", &wt);
  printf("ENTER NUMBER OF RUNS CONCEDED BY THE PLAYER\n: ");
  scanf("%ld", &rc);
  
  printf("\n");
  printf("IPL CAREER  :\n");
  printf("ENTER NO. OF MATCHES PLAYED\n: ");
  scanf("%ld",&m1);
  printf("ENTER NO. OF BALLS BOWLED BY THE PLAYER\n: ");
  scanf("%ld", &bb1);
  printf("ENTER NO. OF WICKETS TAKEN BY THE PLAYER\n: ");
  scanf("%ld", &wt1);
  printf("ENTER NUMBER OF RUNS CONCEDED BY THE PLAYER\n: ");
  scanf("%ld", &rc1);

  printf("\n");
  printf("TEST CAREER :\n");
  printf("ENTER NO. OF MATCHES PLAYED\n: ");
  scanf("%ld",&m2);
  printf("ENTER NO. OF BALLS BOWLED BY THE PLAYER\n: ");
  scanf("%ld", &bb2);
  printf("ENTER NO. OF WICKETS TAKEN BY THE PLAYER\n: ");
  scanf("%ld", &wt2);
  printf("ENTER NUMBER OF RUNS CONCEDED BY THE PLAYER\n: ");
  scanf("%ld", &rc2);
  printf("\n \n \n");

  a=bb/6;            //calculations
  b=(bb%6);
  c=b/10;      // calculating total balls into overs
  ba=rc/wt;    // bowling average in odi
  bs=bb/wt;    // bowling strike rate in odi
  ber=rc/(a+c);  //bowling economy rate in odi
  
  a1=bb1/6;          //calculations
  b1=(bb1%6);
  c1=b1/10;
  ba1=rc1/wt1;      // bowling average in ipl
  bs1=bb1/wt1;      // bowling strike rate in ipl
  ber1=rc1/(a1+c1);  //bowling economy rate in ipl
  
  a2=bb2/6;          //calculations
  b2=(bb2%6);
  c2=b2/10;        
  ba2=rc2/wt2;    // bowling average in test
  bs2=bb2/wt2;    // bowling strike rate in test
  ber2=rc2/(a2+c2);  //bowling economy rate in test

  printf("◘ PLAYER CAREER STATISTICS : \n \n");  //output

  printf("◘ IN ODI  - \n");
  printf("BOWLING AVERAGE                = %0.2f\n",ba);
  printf("BOWLING STRIKE RATE            = %0.2f\n",bs);
  printf("BOWLING ECONOMY RATE           = %0.2f\n",ber);
  printf("NUMBER OF OVERS BOWLED         = %0.1f Overs\n",a+c);
  printf("NUMBER OF BALLS BOWLED         = %ld Balls \n",bb);
  printf("NUMBER OF WICKETS TAKEN        = %ld Wickets\n",wt);
  printf("TOTAL NUMBER OF RUNS CONCEDED  = %ld Runs \n",rc);
  printf("TOTAL NUMBER OF MATCHES PLAYED = %ld Matches \n\n",m);

  printf("◘ IN IPL  - \n");
  printf("BOWLING AVERAGE                = %0.2f\n",ba1);
  printf("BOWLING STRIKE RATE            = %0.2f\n",bs1);
  printf("BOWLING ECONOMY RATE           = %0.2f\n",ber1);
  printf("NUMBER OF OVERS BOWLED         = %0.1f Overs\n",a1+c1);
  printf("NUMBER OF BALLS BOWLED         = %ld Balls\n",bb1);
  printf("NUMBER OF WICKETS TAKEN        = %ld Wickets\n",wt1);
  printf("TOTAL NUMBER OF RUNS CONCEDED  = %ld Runs \n",rc1);
  printf("TOTAL NUMBER OF MATCHES PLAYED = %ld Matches\n\n",m1);

  printf("◘ IN TEST - \n");
  printf("BOWLING AVERAGE                = %0.2f\n",ba2);
  printf("BOWLING STRIKE RATE            = %0.2f\n",bs2);
  printf("BOWLING ECONOMY RATE           = %0.2f\n",ber2);
  printf("NUMBER OF OVERS BOWLED         = %0.1f Overs\n",a2+c2);
  printf("NUMBER OF BALLS BOWLED         = %ld Balls\n",bb2); 
  printf("NUMBER OF WICKETS TAKEN        = %ld Wickets\n",wt2);
  printf("TOTAL NUMBER OF RUNS CONCEDED  = %ld Runs \n",rc2);
  printf("TOTAL NUMBER OF MATCHES PLAYED = %ld Matches\n\n\n\n",m2);

printf("Thank You ♥ - Have a great day 😉");
}

void batting()  //function definition
{
  long int r,dis,ba,b,r1,r2,dis1,dis2,ba1,ba2,b1,b2,mp,mp1,mp2;
  float x,y,z,x1,x2,y1,y2,z1,z2,rr,sr,op,rr1,sr1,op1,rr2,sr2,op2;
  printf("\n \n");
  printf("PLAYER DETAILS IN - \n \n");      //input 
  printf("ODI CAREER :\n");
  printf("ENTER NO. OF MATCHES PLAYED\n: ");
  scanf("%ld", &mp);
  printf("ENTER NO. OF RUNS SCORED BY THE PLAYER\n: ");
  scanf("%ld", &r);  
  printf("ENTER NUMBER OF BALLS PLAYED BY THE PLAYER\n: ");
  scanf("%ld", &b);
  printf("ENTER NO. OF DISMISSALS BY THE PLAYER (OUT)\n: ");
  scanf("%ld", &dis);
  

  printf("\n");
  printf("IPL CAREER \n");
  printf("ENTER NO. OF MATCHES PLAYED\n: ");
  scanf("%ld", &mp1);
  printf("ENTER NO. OF RUNS SCORED BY THE PLAYER\n: ");
  scanf("%ld", &r1);  
  printf("ENTER NUMBER OF BALLS PLAYED BY THE PLAYER\n: ");
  scanf("%ld", &b1);
  printf("ENTER NO. OF DISMISSALS BY THE PLAYER (OUT)\n: ");
  scanf("%ld", &dis1);

  printf("\n");
  printf("TEST CAREER \n");
  printf("ENTER NO. OF MATCHES PLAYED\n: ");
  scanf("%ld", &mp2);
  printf("ENTER NO. OF RUNS SCORED BY THE PLAYER\n: ");
  scanf("%ld", &r2);  
  printf("ENTER NUMBER OF BALLS PLAYED BY THE PLAYER\n: ");
  scanf("%ld", &b2);
  printf("ENTER NO. OF DISMISSALS BY THE PLAYER (OUT)\n: ");
  scanf("%ld", &dis2);

  x=b/6;            //calculations
  y=b%6;
  z=y/10;          //calculating total balls into overs
  ba=r/dis;        //batting average in odi
  rr=r/(x+z);      //run rate in odi
  sr=(float)r/b*100;//strike rate in odi

  x1=b1/6;            //calculations
  y1=b1%6;
  z1=y1/10;
  ba1=r1/dis1;    //batting average in ipl
  rr1=r1/(x1+z1);//run rate in ipl
  sr=(float)r1/b1*100;//strke rate in ipl

  x2=b2/6;            //calculations
  y2=b2%6;
  z2=y2/10;
  ba2=r2/dis;    //batting average in test
  rr2=r2/(x2+z2);//run rate in test
  sr2=(float)r2/b2*100;//strike rate in test

  printf("\n \n \n");
  printf("◘ PLAYER CAREER STATISTICS : \n \n");    //output

  printf("◘ IN ODI  - \n");
  printf("RUN RATE                    = %0.2f per Over\n",rr);
  printf("STRIKE RATE                    = %0.2f \n",sr);
  printf("BATTING AVERAGE                = %ld\n",ba);
  printf("NUMBER OF OVERS PLAYED         = %0.1f Overs\n",x+z);
  printf("NUMBER OF BALLS PLAYED         = %ld Balls \n",b);
  printf("NUMBER OF DISMISSALS ( OUT )   = %ld Times\n",dis);
  printf("TOTAL NUMBER OF RUNS SCORED    = %ld Runs\n",r);
  printf("TOTAL NUMBER OF MATCHES PLAYED = %ld Matches\n \n",mp);

  printf("◘ IN IPL  - \n");
  printf("RUN RATE                    = %0.2f per Over\n",rr1);
  printf("STRIKE RATE                    = %0.2f \n",sr1);
  printf("BATTING AVERAGE                = %ld\n",ba1);
  printf("NUMBER OF OVERS PLAYED         = %0.1f Overs\n",x1+z1);
  printf("NUMBER OF BALLS PLAYED         = %ld Balls\n",b1);
  printf("NUMBER OF DISMISSALS ( OUT )   = %ld Times\n",dis1);
  printf("TOTAL NUMBER OF RUNS SCORED    = %ld Runs \n",r1);
  printf("TOTAL NUMBER OF MATCHES PLAYED = %ld Matches\n \n",mp1);

  printf("◘ IN TEST  - \n");
  printf("RUN RATE                    = %0.2f per Over\n",rr2);
  printf("STRIKE RATE                    = %0.2f \n",sr2);
  printf("BATTING AVERAGE                = %ld\n",ba2);
  printf("NUMBER OF OVERS PLAYED         = %0.1f Overs \n",x2+z2);
  printf("NUMBER OF BALLS PLAYED         = %ld Balls \n",b2);
  printf("NUMBER OF DISMISSALS ( OUT )   = %ld Times \n",dis2);
  printf("TOTAL NUMBER OF RUNS SCORED    = %ld Runs\n",r2);
  printf("TOTAL NUMBER OF MATCHES PLAYED = %ld Matches \n\n\n\n",mp2);


printf("Thank You ♥ - Have a great day 😉");  
}