#include <iostream>
#include <ostream>

int main() {
    char a[22];
    int i = 0;
    int num1[10] = {0}, num2[10] = {0};
    std::cin >> a;
    int n = 0;
    while (a[n + 1] != '\0') {
        n++;
    }
    for (int i = 0; i < 21; i++) {
        if (a[i] <= '9') {
            num1[a[i] - '0'] += 1;
        }
    }
    int e = 0;
    for (i = 0; i <= n; i++) {
        a[n - i] = '0' + (a[n - i] - '0') * 2 + e;
        if (a[n - i] > '9') {
            a[n - i] -= 10;
            if (i == n) {
                a[21] = '1';
            } else {
                e = 1;
            }
        } else {
            e = 0;
        }
    }
    for (int i = 0; i < 22; i++) {
        if (a[i] <= '9') {
            num2[a[i] - '0'] += 1;
        }
    }
    int p = 0;
    for (int i = 0; i < 10; i++) {
        if (num1[i] != num2[i]) {
            p = 1;
            break;
        }
    }
    if (p != 0) {
        std::cout << "No" << std::endl;
    } else {
        std::cout << "Yes" << std::endl;
    }
    if (a[21] == '1') {
        std::cout << a[21];
    }
    std::cout << a << std::endl;
    return 0;
}
// #include <iostream>
// #include <ostream>

// int main()
// {
//     char a[22];
//     int i=0;
//     int num1[10]={0},num2[10]={0};
//     std::cin >> a;
//     int n=0;
//     while(a[n+1]!='\0'){
//         n++;
//     }
//     for (int i=0;i<10;i++){
//         if (a[i]<='9'){
//             num1[a[i]-'0']+=1;
//         }
//     }
//     int e = 0;
//     for(i=0;i<=n;i++){
//         a[n-i]='0'+(a[n-i]-'0')*2+e;
//         if (a[n-i]>'9'){
//             a[n-i]-=10;
//             if(i==n){
//                 a[21]='1';
//             } else{
//                 e=1;
//             }
//         } else {
//             e=0;
//         }
//     }
//     for (int i=0;i<10;i++){
//         if (a[i]<='9'){
//             num2[a[i]-'0']+=1;
//         }
//     }
//     int p=0;
//     for(int i=0; i<10; i++){
//         if (num1[i] != num2[i]){
//             p=1;
//             break;
//         }
//     }
//     if (p!=0){
//         std::cout << "No"<<std::endl;
//     } else {
//         std::cout << "Yes" <<std::endl;
//     }
//     if(a[21]=='1'){
//         std::cout<<a[21];
//     }
//     std::cout<<a<<std::endl;
//     return 0;
// }