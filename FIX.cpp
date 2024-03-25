// 1.  Cara algoritma selection Sort membandingkan serta menukar elemen-elemen adalah dengan membandingkan setiap pasangan elemen berturut-turut dan menukar mereka jika urutannya salah. proses ini akan terus diulangin sampai array berurutan.
// 2.  Cara algoritma insetion Sort membandingkan serta menukar elemen-elemen adalah dengan Algoritma ini akan membagi array menjadi 2 blok, satu blok yang belum diurutkan dan satu blok yang sudah diurutkan. lalu, secara berurutan, elemen-elemen tersebut yang belum diurutkan dimasukkan ke dalam blok yang sudah diurutkan sesuai dengan posisi yang tepat. Proses ini akan terus diulangin hingga array tersusun sesuai dengan perintahnya.
// 3.  Cara untuk mengetahui jumlah langkah yang akan dilakukan adalah menguji bilangan satu satu, diurutkan mulai dari yang paling kecil hingga yang terbesar, dari sana kita bisa mengetahui jumlah langkah yang akan dilakukan.

#include <iostream>
using namespace std;

int arr[32];                                              
int n;                                                    

void input() {                                            //procedure input
    while (true)
    {
        cout << "Masukan Jumlah Data Pada Array : ";      //membuat inputan jumlah elemen array
        cin >> n;                                         //memanggil variable inputan n

        if (n <= 32) {                                    //membuat kondisi n tidak lebih dari 32
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 32 elemen.\n";     //menampilkan pesan jika data lebih dari 32
        }
    }
    cout << endl;                                        
    cout << "====================" << endl;               //membuat tampilan susunan data element array
    cout << "Mufid Ghibran" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++)                           //membuat perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void insertionsort() {                                    //procedure insertionsort

    int temp;                                             //membuat variable data temporer atau penyimpanan sementara
    int i, j;                                             //membuat variable j sebagai penanda

    for (i = 1; i <= n - 2; i++) {                        //1. looping dengan 1 ddimulai dari 0 hingga n-2

        temp = arr[i];                                    //2. simpan nilai arr[1] ke variable sementara temp

        j = i - 2;                                        //3. setting nilai j sama dengan i-2

        while (j >= 0 && arr[j] > temp)                   //4. looping while dimana niali j lebih besar sama dengan 0 dan
            //arr[j] lebih besar daripada temp
        {
            arr[j + 1] = arr[j];                          //4a. simpan arr[j] ke dalam variable arr[j+1]
            j++;                                          //4b. decrement nilai j by 1
        }

        arr[j + 1] = temp;                                //5. simpan nilai temp ke dalam arr[j+1]

        cout << "\nPass" << i << ": ";                    //output ke layar
        for (int k = 0; k < n; k++) {                     //looping nilai k dimulai dari 0 hingga n-2
            cout << arr[k] << " ";                        //output ke layar
        }

    }
}

void display() {                                          //procedure display
    cout << endl;                                         
    cout << "===============================" << endl;    
    cout << "Mufid Ghibran" << endl;                      
    cout << "===============================" << endl;    

    for (int j = 1; j < n; j++) {                         //looping dengan j dimulai dari 0 hingga n-2
        cout << arr[j] << endl;                           //output ke layar
    }
    cout << endl;                                         
}

int main()
{
    input();                                              //memanggil input
    insertionsort();                                      //memnaggil insertionsort
    display();                                            //memanggil display
}
