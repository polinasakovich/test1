    #include<math.h>;
    #include<iostream>;
    using namespace std;

    int suma(int t[], int k) {
      int s = 0;
      for (int i = 0; i < k; i++)
        s = s + t[i];
      return s;
    }
    int min(int t[], int k) {

      int s =t[0];
      for (int i = 0; i < k; i++)
        if (s > t[i])
          s = t[i];
      return s;
    }
    int max(int t[], int k) {
      int s =t[0];
      for (int i = 0; i < k; i++)
        if (s < t[i])
          s = t[i];
      return s;
    }
    string sort(int t[], int k) {
      int tmp;
      string result = "";
        for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++)
          if (t[j] >t[j+1]) {
            tmp = t[j];
            t[j] = t[j + 1];
            t[j + 1] = tmp;
          }
      }
        for (int i=0; i < k; i++) {


        result+= to_string(t[i]);
        result+=" ";
        //cout<<result<<endl;
      }
        return result;
    }



    int main() {
      int tab[10] = {1,12,3,16,7,8,69,0,52,4};
      int w1, w2,w3;
      int nr;
      cout <<"wybierz"<<endl<<"1-suma"<<endl<<"2-min"<<endl<<"3-max"<<endl<<"4-sort"<<endl;
      cin>>nr;
      switch(nr) {
            case 1:
              cout<<"suma= "<<suma(tab,10)<<endl;
              break;
            case 2:
              cout<<"min= "<<min(tab,10)<<endl;
              break;
            case 3:
              cout<<"max= "<<max(tab,10)<<endl;
              break;
            case 4:
              cout<<sort(tab,10);
              break;
            default:
                    cout << "zly wybor" << endl;
        }
    return 0;
    }
