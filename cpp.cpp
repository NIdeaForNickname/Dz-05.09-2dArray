#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    const int N = 5;
    const int M = 5;

    int arr[N][M] = {};

    int sum = 0;
    int min = 101, max = -101;

    int count = 0;


    // task 1
    cout << "---------------1---------------" << endl;


    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            arr[i][j] = rand() % 21;
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            sum += arr[i][j];
            
            if (min > arr[i][j]){
                min = arr[i][j];
            }
            if (max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }

    cout << "Sum: " << sum << endl;
    cout << "Avrg.: " << sum / (M * N) << endl;
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    
    // task 2
    cout << "---------------2---------------" << endl;
    
    
    int sum1 = 0, sum2 = 0;
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            arr[i][j] = rand() % 21;
        }
    }
    
    if (M > N){
        for (int i = 0; i < N; i++){
            sum1 += arr[i][i];
            sum2 += arr[i][M-i];
        }
    } else {
        for (int i = 0; i < N; i++){
            sum1 += arr[i][i];
            sum2 += arr[i][N-i];
        }
    }

    cout << "Main diagonal: " << sum1 << endl;
    cout << "Sub diagonal: " << sum2 << endl;


    // task 3
    cout << "---------------3---------------" << endl;


    int neg = 0, pos = 0, zer = 0;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            arr[i][j] = (rand() % 21) -10;
        }
    }
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if(arr[i][j] > 0){
                pos++;
            } else if (arr[i][j] < 0){
                neg++;
            } else{
                zer++;
            }
        }
    }

    cout << "Positive's: " << pos << endl;
    cout << "Negative's: " << pos << endl;
    cout << "Zero's: " << pos << endl;


    // task 4
    cout << "---------------4---------------" << endl;

    int rows[N] = {};
    int cols[M] = {};

    sum = 0;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            arr[i][j] = rand() % 21;
        }
    }

    cout << "Row sum: " << endl << "    ";
    for(int i = 0; i < N; i++){
        for (int j = 0; j < M; j++)
        {
           sum += arr[i][j];
        }
        
        rows[i] = sum;
        
        cout << i << ": " << sum << ";  ";

        sum = 0; 
    }

    cout << "Col sum: " << endl << "    ";
    for(int i = 0; i < M; i++){
        for (int j = 0; j < N; j++)
        {
           sum += arr[j][i];
        }
        
        cols[i] = sum;
        
        cout << i << ": " << sum << ";  ";

        sum = 0; 
    }

    cout << endl;


    // task 5 - номер строки и столбца я понял как 1, 2, 3, 4 ...
    cout << "---------------5---------------" << endl;



    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            arr[i][j] = (i+1)*10 + (j+1);
            cout << arr[i][j] << ", ";
        }
        cout << endl;
    }


    // task 6  {0 <-> 1 <-> 2 <-> 3, 4}?
    cout << "---------------6---------------" << endl;


    int temp;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            arr[i][j] = j + (i * 5);
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 1; j < M; j += 2){
            temp = arr[i][j-1];
            arr[i][j-1] = arr[i][j];
            arr[i][j] = temp;
        }
        cout << endl;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << arr[i][j] << ", ";
        }
        cout << endl;
    }


    // task 7
    cout << "---------------7---------------" << endl;


    max = -101, min = 101;
    int MinC = 0, MaxC = 0;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            arr[i][j] = rand() % 201 - 100;
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (min > arr[i][j]){
                min = arr[i][j];
                MinC = count;
            }
            if (max < arr[i][j]){
                max = arr[i][j];
                MaxC = count;
            }
            cout << arr[i][j] << ", ";
            count++;
        }
        cout << endl;
    }

    count = 0;
    if (MinC > MaxC){
        for (int i = MaxC; i <= MinC; i++){
            count += arr[i/N][i%M];
        }
    } else {
        for (int i = MinC; i <= MaxC; i++){
            count += arr[i/N][i%M];
        }
    }

    cout << endl;
    cout << count << endl;


    // task 9
    cout << "---------------8---------------" << endl;


    count = 1;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            arr[i][j] = count;
            if (count < 10){
                cout << count << ",  ";
            } else {
                cout << count << ", ";
            }
            count++;
            
        }
        cout << endl;
    }
    return 0;
}