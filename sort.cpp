#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
//int linearSearch(auto data, auto key)//prototype
//{
//	for(int i = 0; i < data.size();i++)
//	{
//		if (data[i] == key)
//		{
//			return i;
//		}
//	}
//	return -1;
//}

void selectionSort (auto& data)
{
	int i, j, minIndex, tmp;
int leng = data.size();
       for (i = 0; i < leng; i++)
	{
	minIndex = i;
		
	//find smallest in unsorted part
		for (j = i + 1; j < leng; j++)
		{
			if (data[j] < data[minIndex])
			    minIndex = j;
		}

		if (minIndex != i)
		{
			tmp = data[i];
			data[i] = data[minIndex];
			data[minIndex] = tmp;
		} //end if

	}// end outer loop
}//end function

int main()
{
  vector<int> inputs;
  int input;
  int index;

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the 0-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != 0)//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
else  
 selectionSort(inputs);
int sizevec = inputs.size();
for (index = 0; index < sizevec; index++)
{
cout << inputs[index] << endl;
}
   
   cout<<endl<<"Program \"sort it\" is now finished."<<endl<<endl;
cin.clear();
    return 0;
}
