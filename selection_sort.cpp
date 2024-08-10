#include <iostream>
#include <vector>
using namespace std;

// Função para encontrar o indice do menor elemento
int findSmallest(const vector<int>& arr){
    int smallest = arr[0]; // Assume que o primeiro elemento é o menor
    int smallest_index = 0; // Indice do menor elemento

    // Itera sobre o array apartir do segunco elemento
    for(int i = 1; i < arr.size(); ++i){
        // Se encontrar um elemento menor atualiza
        if(arr[i] < smallest){
            smallest = arr[i];
            smallest_index = i;
        }
    }
    return smallest_index; // Retorna o indice do menor elemento
}

// Função para realizar a ordenação dos elementos
vector<int> selectionSort(vector<int> arr){
    vector<int> newArr; // Novo array para os elementos ordenados

    int n = arr.size();
    for(int i = 0; i < n; ++i){
        // Encontra o indice do menor elemento no array
        int smallest = findSmallest(arr);

        newArr.push_back(arr[smallest]); // Adiciona o menor elemento no novo array
        arr.erase(arr.begin() + smallest);// Remove o menor elemento do array original
    }
    return newArr; // Retorna o novo array ordenado;
}

int main(){

    vector<int> arr = {21, 34, 65, 8, 0, 13, 200, 1000, 530};

    vector<int> sortedArr = selectionSort(arr);

    cout << "Array ordenado: ";
    for(int num : sortedArr){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}