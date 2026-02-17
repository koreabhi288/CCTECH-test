#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Line {
public:
    int x, y;
    void input() 
    {
        cout<<"Enter X and Y coordinates: ";
        cin >>x>>y;
    }
    void show() 
    {
        cout <<"Line "<<x<< " "<<y << endl;
    }
};

class circle {
public:
    int cx, cy, r;
    void input() 
    {
        cout<<"enter coordinates of center: ";
        cin >> cx >> cy;
        cout << "enter radius: ";
        cin >> r;
    }
    void show() 
    {
        cout << "Circle " <<cx << " " << cy << " radius " <<r<<endl;
    }
};

class TextObj {
public:
    string t;
    void input() 
    {
        cout << "enter text to add: ";
        cin >> t;
    }
    void show() 
    {
        cout << t << endl;
    }
};

class CADdrawing {
    vector<Line>lines;
    vector<circle>circles;
    vector<TextObj> texts;

public:
    void addLine() 
    {
        Line l;
        l.input();
        lines.push_back(l);
    }

    void addCircle() 
    {
        circle c;
        c.input();
        circles.push_back(c);
    }

    void addText() 
    {
        TextObj t;
        t.input();
        texts.push_back(t);
    }

    void listObjects() 
    {

        for (auto &l:lines) 
        {
          l.show();
        }
        for(auto &c: circles)
        {
          c.show();
        } 
        for (auto &t: texts) 
        {
          t.show();
        }
    }

    void deleteObject() {
        cout << "enter object type for deletion" << endl;
        cout << "1.Line" << endl;
        cout << "2.Crcle" << endl;
        cout << "3. text" << endl;
        int ch;
        cin >> ch;

        switch (ch)
        {
        case 1:
            if (!lines.empty()) 
            {
              lines.pop_back();
              cout << "Line object delted successfully" << endl;
            } 
            else
            {
              cout << "No line object present" << endl;
            }
            break;

        case 2:
            if (!circles.empty()) 
            {
                circles.pop_back();
                cout << "Circle object deleted successfully" << endl;
            } 
            else
            {
              cout << "No circle object present" << endl;
            }
            break;

        case 3:
            if (!texts.empty()) 
            {
                texts.pop_back();
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
          cout<< "Abhi thak nahi kiya " << //not implemented
          endl; break;
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
