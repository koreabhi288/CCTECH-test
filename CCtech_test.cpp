#include <iostream>
#include <string>
using namespace std;

class CADdrawing
{
  int X1[50], Y1[50];
  int CX[50], CY[50], CR[50];
  string text[50];

  int line_Count = 0;
  int circle_Count = 0;
  int text_Count = 0;

public:
  void addLine()
  {
    cout << "Enter X and Y coordinates: ";
    cin >> X1[line_Count] >> Y1[line_Count];
    line_Count++;
  }
  void addCircle()
  {
    cout << "Enter coordinates of center: ";
    cin >> CX[circle_Count] >> CY[circle_Count];
    cout << "Enter radius: ";
    cin >> CR[circle_Count];
    circle_Count++;
  }

  void addText()
  {

    cout << "enter test to add: ";
    cin >> text[text_Count];
    text_Count++;
  }

  void listObjects()
  {
    for (int i = 0; i < line_Count; i++)
    {
      cout << "Line  " << X1[i] << " " << Y1[i] << endl;
    }
    for (int i = 0; i < circle_Count; i++)
    {
      cout << "Circle  " << CX[i] << " " << CY[i] << " radius " << CR[i] << endl;
    }
    for (int i = 0; i < text_Count; i++)
    {
      cout << text[i] << endl;
    }
  }
  void deleteObject()
  {

    cout << "enter object type for deletion" << endl;
    cout << "1.Line" << endl;
    cout << "2.Crcle" << endl;
    cout << "3. text" << endl;
    int ch;
    cin >> ch;
    do
    {
      switch (ch)
      {
      case 1:
        if (line_Count > 0)
        {
          X1[line_Count - 1] = 0;
          Y1[line_Count - 1] = 0;
          line_Count--;
          cout << "Line object delted successfully" << endl;
        }
        else
        {
          cout << "No line object present" << endl;
        }
        break;
      case 2:
        if (circle_Count > 0)
        {
          CX[circle_Count-1] = 0;
          CY[circle_Count-1] = 0;
          CR[circle_Count-1] = 0;
          circle_Count--;
          cout << "Circle object deleted successfully" << endl;
        }
        else
        {
          cout << "No circle object present" << endl;
        }
        break;
      case 3:
        if (text_Count > 0)
        {
          text[text_Count - 1] = "";
          text_Count--;
          cout << "Text object deleted successfully" << endl;
        }
        else
        {
          cout << "No text object present" << endl;
        }
        break;
      default:
        cout << "Invalid choice" << endl;
      }
    } while (ch <1 || ch>3);
  }
};

int main()
{
  CADdrawing cd;
  int choice;

  do
  {
    cout << "Menu" << endl;
    cout << "1 Add Line" << endl;
    cout << "2 Add Circle" << endl;
    cout << "3 Add Text" << endl;
    cout << "4 Clone Object" << endl;
    cout << "5 Delete Object" << endl;
    cout << "6 List Objects" << endl;
    cout << "8 Exit" << endl;
    cout << "Enter choice: " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
      cd.addLine();
      break;

    case 2:
      cd.addCircle();
      break;

    case 3:
      cd.addText();
      break;

    case 4:
      cout << "Abhi thak nahi kiya " << endl; // This is remaining

      break;

    case 5:
      cd.deleteObject();
      break;

    case 6:
      cd.listObjects();
      break;

    case 8:
      cout << "Exit" << endl;
      break;

    default:
      cout << "Invalid choice" << endl;
    }

  } while (choice != 8);
}
