int adjacentElementsProduct(std::vector<int> inputArray) 
{
    using namespace std;
    
int p = -1000, x = -1000, y = -1000;

    for (int i = 0; i < inputArray.size()-1; i++)
    {
        cout << inputArray[i]<<endl;

        x = inputArray[i];
        y = inputArray[i+1];
         
        
        cout << "x: " << x <<endl;
        cout << "y: " << y <<endl;
       
       if(x * y > p )
            p = x * y;
        
        cout << "P: " << p <<endl;
    }
return p;
}
