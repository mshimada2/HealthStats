//Class collaboration for learning how to use vectors
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> bpm;
    vector <int> steps;
    vector <int> calories;
    int heartRate;
    int biggest = -99; 

    do
    {
     // int heartRate;
      cout<<"Please enter heart rate reading (in beats per minute, or -1 to stop): ";
      cin>>heartRate;

      bpm.push_back(heartRate);
     

    }while( heartRate != -1 );
    bpm.pop_back(); //to remove the -1 value for stopping the loop

    


   // bpm.resize(10);
   // bpm.push_back(90);
   // bpm.push_back(100);
   // bpm.push_back(70);
        
        //notes  
        //member functions for vectors
        // bpm.size(); returns # elements
        //bpm.resize(size); defines # elements
        // bpm.clear(); deletes all elements
        // bpm.empty(); returns whether or not is empty
        // bpm.push_back(value); add element at end vector
        // bpm.pop_back(); removes element at end
        // bpm.at(index); returns element at index 

        //if (bpm.empty() == true)

        //bpm.at(0);
        //bpm[0];

    cout<<"BPM is currently size "<<bpm.size()<<endl;
   // cout<<"The last item in BPM is... "<<bpm[10]<<endl;;
    cout<<"The last item in BPM is... "<<bpm[ bpm.size() -1 ]<<endl;
    cout<<"The items in BPM are... "<<endl;

    for(int i = 0; i < bpm.size(); i++){
    
      cout<<bpm[i]<<endl;
      if( bpm[i] > biggest)
      {

      biggest = bpm[i];

      }

    }
cout<<"This is the biggest BPM: "<<biggest<<". "<<endl;
    return 0;
}
