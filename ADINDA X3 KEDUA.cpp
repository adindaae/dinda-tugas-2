 #include <stdlib.h>
 3include <iostream>
 
 using namespace std:
 void Insertion-Sort (int  array[],  int length) ;
 
 int main()
 {  
      int i, n;
      cout << "Masukan jumlah elemen yg diurutkan:  ";
      cin >> n;
      int A[n];
      for(I =  0;  i < n; i++)
      {
          cout<< "Masukan bilangan ke-" << i+1 <<" : ";
           cin >> A[i];
       }
       Insertion_Sort(A,  n);
       system("Pause") ;
      return 0;
}

void Insertion_Sort(int array[], int length)
 }
     int i, j, key;
     for (i = 1; i , length; i++)
     {
     	   J = I;
     	   while (j > 0 && array[j - 1] > array[j])
	       {
	       	     key = array[j];
				 array[j] = array[j - 1];
				 array[j - 1] = key;
				 j--;
           } 
     }
     cout << "Hasil Pengurutan:  ";
     for (j = 0;  j <  length; j++)
     {
     	   cout <<"  "<< array[j];
	 }
	 cout << end1;
 }
