#include<iostream>
#include<cstdlib>
using namespace std;
class quiz{
int score=0;
int scoremed=0;
int scorehard=0;
string name;
char ans;
int ques;
public:
    void getname(){
    cout<<"\nEnter your name:";
    cin>>name;
    }
    void getans(char a){
    ans=a;
    }
    void geteasyques(int);
    void getmedques(int);
    void gethardques(int);
    void welcomeeasy();
    void welcomemed();
    void welcomehard();
    void quizend();
};
void quiz :: geteasyques(int a){
    ques=a;
switch(ques){
    case 1:
    cout<<"\nQ1 What is the formula of area of rectangle?";
    cout<<"\na)l*b        b)l+b";
    cout<<"\nc)2l*b       d)2l-b\n";
    break;
    case 2:
    cout<<"\nQ2 What is the formula of area of square of side s?";
    cout<<"\na)4+s        b)s+s";
    cout<<"\nc)2*s        d)s*s\n";
    break;
    case 3:
    cout<<"\nQ3 What is the formula of area of triangle?";
    cout<<"\na)2+b*h         b)b+h";
    cout<<"\nc)l/2*b*h       d)2b-h\n";
    break;
    case 4:
    cout<<"\nQ4 What is the value of log1?";
    cout<<"\na)1        b)0";
    cout<<"\nc)3        d)2\n";
    break;
    case 5:
    cout<<"\nQ5 Log(xy)=?";
    cout<<"\na)log x-log y        b)log x*log y";
    cout<<"\nc)log x+log y        d)log x/log y\n";
    break;
    case 6:
    cout<<"\nQ6 What is the value of exponent e?";
    cout<<"\na)2.11        b)3.45";
    cout<<"\nc)2.42        d)2.71\n";
    break;
    case 7:
    cout<<"\nQ7 What is the formula of perimeter of rectangle?";
    cout<<"\na)l*b        b)2(l+b)";
    cout<<"\nc)2l*b       d)2l-b\n";
    break;
    case 8:
    cout<<"\nQ8 What is the formula of perimeter of square?";
    cout<<"\na)4*s        b)s*s";
    cout<<"\nc)3*s       d)2*s\n";
    break;
    case 9:
    cout<<"\nQ9 LCM x HCF = ?";
    cout<<"\na)Sum of given no.s        b)Product of given no.s";
    cout<<"\nDivision of given no.s     d)None of these\n";
    break;
    case 10:
    cout<<"\nQ10 Sum of the angles of triangle equals?";
    cout<<"\na)180        b)90";
    cout<<"\nc)270        d)360\n";
    break;
}
}
  void quiz :: welcomeeasy(){
      int i,r1=0,w1=0;
      char n;
      getname();
  cout<<"\nWelcome Mr/Miss."<<name<<" in mathematics quiz";
  cout<<"\n..............Easy Level.................";
  cout<<"\nEvery question carry equal marks each question have 2 marks";
  cout<<"\nThere is also a negative marking of 1 marks for each incorrect question";
  for(i=1;i<=10;i++){
    geteasyques(i);
    cout<<"\nEnter your option:";
    cin>>n;
    getans(n);
    system("cls");
    if(i==1 && ans=='a'){
        cout<<"\nRight answer";
        score=score+2;
        r1++;
    }
    else if(i==2 && ans=='d'){
        cout<<"\nRight answer";
        score=score+2;
        r1++;
    }
    else if(i==3 && ans=='c'){
        cout<<"\nRight answer";
        score=score+2;
        r1++;
    }
    else if(i==4 && ans=='b'){
        cout<<"\nRight answer";
        score=score+2;
        r1++;
    }
    else if(i==5 && ans=='c'){
        cout<<"\nRight answer";
        score=score+2;
        r1++;
    }
    else if(i==6 && ans=='d'){
        cout<<"\nRight answer";
        score=score+2;
        r1++;
    }
    else if(i==7 && ans=='b'){
        cout<<"\nRight answer";
        score=score+2;
        r1++;
    }
    else if(i==8 && ans=='a'){
        cout<<"\nRight answer";
        score=score+2;
        r1++;
    }
    else if(i==9 && ans=='b'){
        cout<<"\nRight answer";
        score=score+2;
        r1++;
    }
    else if(i==10 && ans=='a'){
        cout<<"\nRight answer";
        score=score+2;
        r1++;
    }
    else{
        cout<<"\nWrong answer";
        score=score-1;
        w1++;
    }
    if(i==10){
            if(score==20){
     cout<<"\nCongratulations you have completed the first level";
     cout<<"\nYou got "<<score<<"/20";
            }
    else{
        cout<<"\nYou lose!"
            <<" Better luck next time";
        cout<<"\nRight answers="<<r1;
        cout<<"\nWrong answers="<<w1;
        cout<<"\nYou got "<<score<<"/20";
        exit(0);
    }
    }
   }
  }




 void quiz :: getmedques(int a){
    ques=a;
switch(ques){
    case 1:
    cout<<"\nQ1 What is the value of sin90?";
    cout<<"\na)1         b)0";
    cout<<"\nc)1/2       d)None of these\n";
    break;
    case 2:
    cout<<"\nQ2 sin(90-x)= ?";
    cout<<"\na)tan(x)        b)sin(x)";
    cout<<"\nc)cot(x)        d)cos(x)\n";
    break;
    case 3:
    cout<<"\nQ3 cos(-x) = ?";
    cout<<"\na)sin(x)         b)cos(-x)";
    cout<<"\nc)cos(x)         d)None of these\n";
    break;
    case 4:
    cout<<"\nQ4 What is the value of tan45?";
    cout<<"\na)1/2        b)1";
    cout<<"\nc)1/3        d)0";
    break;
    case 5:
    cout<<"\nQ5 General equation of straight line is?";
    cout<<"\na)y=mc+x        b)x+y=2";
    cout<<"\nc)y=mx+c        d)x=3-2y\n";
    break;
    case 6:
    cout<<"\nQ6 Probability of sure event equals?";
    cout<<"\na)2        b)3";
    cout<<"\nc)0        d)1\n";
    break;
    case 7:
    cout<<"\nQ7 Probability of impossible event is equals?";
    cout<<"\na)1        b)0";
    cout<<"\nc)2        d)3\n";
    break;
    case 8:
    cout<<"\nQ8 Volume of cube equals?";
    cout<<"\na)s*s*s        b)s*s";
    cout<<"\nc)3*s          d)2*s*s\n";
    break;
    case 9:
    cout<<"\nQ9 Surface area of cuboid equals?";
    cout<<"\na)2lb+2bh+hl           b)2(lb+bh+hl)";
    cout<<"\nc)2lb+bh+2hl           d)2lb+bh+hl\n";
    break;
    case 10:
    cout<<"\nQ10 Sum of the angles of quadrilateral equals?";
    cout<<"\na)360        b)90";
    cout<<"\nc)270        d)180\n";
    break;
}
}
  void quiz :: welcomemed(){
      int i,r2=0,w2=0;
      char n;
      cout<<"\nDo you want to continue (Y/N)?";
     char s;
     cin>>s;
     if(s=='Y' || s=='y'){
  cout<<"\n..............Medium Level.................";
  cout<<"\nEvery question carry equal marks each question have 3 marks";
  cout<<"\nThere is also a negative marking of 2 marks for each incorrect question";
  for(i=1;i<=10;i++){
    getmedques(i);
    cout<<"\nEnter your option:";
    cin>>n;
    getans(n);
    system("cls");
    if(i==1 && ans=='a'){
        cout<<"\nRight answer";
        scoremed=scoremed+3;
        r2++;
    }
    else if(i==2 && ans=='d'){
        cout<<"\nRight answer";
        scoremed=scoremed+3;
        r2++;
    }
    else if(i==3 && ans=='c'){
        cout<<"\nRight answer";
        scoremed=scoremed+3;
        r2++;
    }
    else if(i==4 && ans=='b'){
        cout<<"\nRight answer";
        scoremed=scoremed+3;
        r2++;
    }
    else if(i==5 && ans=='c'){
        cout<<"\nRight answer";
        scoremed=scoremed+3;
        r2++;
    }
    else if(i==6 && ans=='d'){
        cout<<"\nRight answer";
        scoremed=scoremed+3;
        r2++;
    }
    else if(i==7 && ans=='b'){
        cout<<"\nRight answer";
        scoremed=scoremed+3;
        r2++;
    }
    else if(i==8 && ans=='a'){
        cout<<"\nRight answer";
        scoremed=scoremed+3;
        r2++;
    }
    else if(i==9 && ans=='b'){
        cout<<"\nRight answer";
        scoremed=scoremed+3;
        r2++;
    }
    else if(i==10 && ans=='a'){
        cout<<"\nRight answer";
        scoremed=scoremed+3;
        r2++;
    }
    else{
        cout<<"\nWrong answer";
        scoremed=scoremed-1;
        w2++;
    }
    if(i==10){
            if(scoremed==30){
     cout<<"\nCongratulations you have completed the second level";
     cout<<"\nYou got "<<scoremed<<"/30";
    }
    else{
        cout<<"\nYou lose!"
            <<" Better luck next time";
        cout<<"\nRight answers="<<r2;
        cout<<"\nWrong answers="<<w2;
        cout<<"\nYou got "<<scoremed<<"/30";
        exit(0);
    }
    }
   }
  }
  else
    exit(0);
  }





 void quiz :: gethardques(int a){
    ques=a;
switch(ques){
    case 1:
    cout<<"\nQ1 The sum of interior angles of the polygon of n-sides is?";
    cout<<"\na)(n-2)x180        b)(n+2)x180";
    cout<<"\nc)(n-2)x270        d)None of these\n";
    break;
    case 2:
    cout<<"\nQ2 Nth term of the AP is ?";
    cout<<"\na)Tn=2a+(n-1)d        b)Tn=a+(d-1)n";
    cout<<"\nc)Tn=a+2(n-1)d        d)Tn=a+(n-1)d\n";
    break;
    case 3:
    cout<<"\nQ3 If no of rows equals no of columns m=n then matrix is?";
    cout<<"\na)Row matrix          b)Null matrix";
    cout<<"\nc)Square matrix       d)None of these\n";
    break;
    case 4:
    cout<<"\nQ4 What is the value of 0!?";
    cout<<"\na)0        b)1";
    cout<<"\nc)3        d)2\n";
    break;
    case 5:
    cout<<"\nQ5 Any quantity that has both magnitude and direction is called?";
    cout<<"\na)Scaler quantity        b)Scaler and vector";
    cout<<"\nc)Vector quantity        d)None of these\n";
    break;
    case 6:
    cout<<"\nQ6 Equation of plane in intercept form is?";
    cout<<"\na)ax+by+cz=1        b)(a+b+c)xyz";
    cout<<"\nc)x+y+z=1           d)x/a+y/b+z/c=1\n";
    break;
    case 7:
    cout<<"\nQ7 The set of all possible outcomes of an experiment is called?";
    cout<<"\na)Experiment                b)Sample space";
    cout<<"\nc)Favourable outcomes       d)None of these";
    break;
    case 8:
    cout<<"\nQ8 p(A)+P(not A) equals ?";
    cout<<"\na)1        b)2/3";
    cout<<"\nc)0        d)1/2";
    break;
    case 9:
    cout<<"\nQ9 The positive square root of the variance is called?";
    cout<<"\na)Mean                         b)Standard deviation";
    cout<<"\nRoot mean square deviation     d)None of these\n";
    break;
    case 10:
    cout<<"\nQ10 The set of all possible subsets of a set is called ?";
    cout<<"\na)Power set        b)Universal set";
    cout<<"\nc)Equal set        d)Singleton set\n";
    break;
}
}
  void quiz :: welcomehard(){
      int i,r3=0,w3=0;
      char n;
      cout<<"\nDo you want to continue (Y/N)?";
     char s;
     cin>>s;
     if(s=='Y' || s=='y'){
  cout<<"\n..............Hard Level.................";
  cout<<"\nEvery question carry equal marks each question have 4 marks";
  cout<<"\nThere is also a negative marking of 2 marks for each incorrect question";
  for(i=1;i<=10;i++){
    gethardques(i);
    cout<<"\nEnter your option:";
    cin>>n;
    getans(n);
    system("cls");
    if(i==1 && ans=='a'){
        cout<<"\nRight answer";
        scorehard=scorehard+4;
        r3++;
    }
    else if(i==2 && ans=='d'){
        cout<<"\nRight answer";
        scorehard=scorehard+4;
        r3++;
    }
    else if(i==3 && ans=='c'){
        cout<<"\nRight answer";
        scorehard=scorehard+4;
        r3++;
    }
    else if(i==4 && ans=='b'){
        cout<<"\nRight answer";
        scorehard=scorehard+4;
        r3++;
    }
    else if(i==5 && ans=='c'){
        cout<<"\nRight answer";
        scorehard=scorehard+4;
        r3++;
    }
    else if(i==6 && ans=='d'){
        cout<<"\nRight answer";
        scorehard=scorehard+4;
        r3++;
    }
    else if(i==7 && ans=='b'){
        cout<<"\nRight answer";
        scorehard=scorehard+4;
        r3++;
    }
    else if(i==8 && ans=='a'){
        cout<<"\nRight answer";
        scorehard=scorehard+4;
        r3++;
    }
    else if(i==9 && ans=='b'){
        cout<<"\nRight answer";
        scorehard=scorehard+4;
        r3++;
    }
    else if(i==10 && ans=='a'){
        cout<<"\nRight answer";
        scorehard=scorehard+4;
        r3++;
    }
    else{
        cout<<"\nWrong answer";
        scorehard=scorehard-2;
        w3++;
    }
    if(i==10){
            if(scorehard==40){
     cout<<"\nCongratulations you have completed the final level";
     cout<<"\nYou got "<<scorehard<<"/40";
     quizend();
    }
    else{
        cout<<"\nYou lose!"
            <<" Better luck next time";
        cout<<"\nRight answers="<<r3;
        cout<<"\nWrong answers="<<w3;
        cout<<"\nYou got "<<scorehard<<"/40";
        exit(0);
    }
    }
   }
  }
  else
    exit(0);
  }

    void quiz :: quizend(){
       cout<<"\nCongratulations you got the certificate of completion\n\n";
   cout<<"\n\n         Certificate of completion\n"
       <<"\n This is to certify that MR/MISS "<<name<<" successfully \n"
       <<"completed the three levels of mathematics quiz.\n\n\n";
   }

 int main(){
 quiz q;
 q.welcomeeasy();
 q.welcomemed();
 q.welcomehard();
 return 0;
 }
