#include<iostream>
#include<string>

using namespace std;

class CADdrawing
{
  public:
  void addLine()
  {
    int x,y;
    cout<<"enter X and y coordinates"<<endl;
    cin>>x>>y;
  }
  void addCircle()
  {
    int centerX,centerY, radius;
    cout<<"enter center coordinates ;"<<endl;
    cin>>centerX>>centerY;
    cout<<"enter radius"<<endl;
    cin>>radius;
  }
  void addText()
  {
     string text;
     cout<<"enter text to add"<<endl;
     cin>>text;
  }
  void display(int x,int y,int radius,int centerX, int centerY, string text)
  {
    cout<<"Line has coordinates (x,y)"<<x<<" "<<y<<endl;
    cout<<"circle has center coordinates (x,y)"<<centerX<<" "<<centerY<<endl;
    cout<<"circle has radius  "<<radius<<endl;
    cout<<"text is "<<text<<endl;

  }
};
int main()
{
  CADdrawing cd;
  int choice;
   do{
   cout<<"Given below menu"<<endl;
  cout<<"1.Add Line"<<endl;
  cout<<"2.Add Circle"<<endl;
  cout<<"3.Add Text"<<endl;
  cout<<"4.Clone Object"<<endl;
  cout<<"5.Delete Object"<<endl;
  cout<<"6.List Objects"<<endl;
  cout<<"7. Display Objects"<<endl;
  cout<<"8.Exit"<<endl;
  cout<<"enter choice"<<endl;
  cin>>choice;

  switch(1)
  {
    case 1:

      cout<<"Add Line"<<endl;
      cd.addLine();

      break;
    case 2:
      cout<<"add cirrcle"<<endl;
      cd.addCircle();

      break;
    case 3:
      cout<<"add text"<<endl;
      cd.addCircle();
      break;

    case 4:
      cout<<"Object clone"<<endl;
      cd.addText();
      break;

    case 5:
      cout<<"delete Object"<<endl;
      break;
    case 6:
      cout<<"list Objects"<<endl;
      break;
    case 7:
      cout<<"display Objects"<<endl;
      cd.display();
      break;

    case 8:
      cout<<"exit"<<endl;
      break;
    default:
      cout<<"enter valid choice"<<endl;
  }
}while(choice != 8);
}
