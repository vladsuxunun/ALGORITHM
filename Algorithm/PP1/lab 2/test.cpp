 #include<iostream>
     using namespace std;
     int main()
     {
         int n;          // Размер массива
         int i;          // Счетчик в циклах
     
         cout<<"Enter the number of digits: ";
         cin>>n;         // Считываем размер массива
     
         int arr[n];     // Объявление массива
     
                         // Считываем массив
         cout<<"Enter "<<n<<" integer numbers: ";
         for(i=0;i<n;++i)
             cin>>arr[i];
     
                         // Прибавляем по 1 к каждому элементу
         for(i=0;i<n;++i)
         	arr[i]+=1;
     
                         // Выводим массив на экран
         for(i=0;i<n;++i)
             cout<<arr[i]<<" ";
                         // Переведем курсор на новую строку
         cout<<endl;
         return 0;
     }