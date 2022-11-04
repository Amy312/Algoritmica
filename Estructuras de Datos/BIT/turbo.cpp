#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int BIT[100002];
int v[100002];
int tamanhoVector;

void update(int posicion, int valor ) {
    for(;posicion <= tamanhoVector ;posicion += posicion&-posicion) {
        BIT[posicion]+= valor;
        
    }
}

int query(int posicion){ // F(3)
    int result = 0 ;
    for(;posicion > 0 ;posicion -= posicion&-posicion) {
        result+= BIT[posicion];
    }
    return result; 
}
// query (ini,fin)
// query (2,5)
int querymn(int inicio, int final) {
    //cout << query(final) << " qfin- qini " << query(inicio) << "cout " <<  query(final)-query(inicio)<< endl;
    return query(final-1)-query(0);
}
int querymx(int inicio, int final) {
    //cout << query(final) << " qfin- qini " << query(inicio) << "cout " <<  query(final)-query(inicio)<< endl;
    return query(final)-query(inicio);
}

int main() {
    memset(BIT, 0, sizeof(BIT));
    //input;
    int q, a, b; 
    char c;
    cin>>tamanhoVector; 
    for(int i=1;i<=tamanhoVector;i++) {
        cin >> a;
        v[a] = i;
        update(i, 1);
    }
  /*  for(int i =0 ;i<= tamanhoVector; i++){
        cout<<"["<< BIT[i]<<"]";
    }
    cout << endl;
     for(int i =0 ;i<= tamanhoVector; i++){
        cout<<"["<< v[i]<<"]";
    }*/
    int imn = 1, imx= tamanhoVector;
    for(int i=1; i<=tamanhoVector; i++){
       /* for(int ii =1;ii<= tamanhoVector; ii++){
        cout<<"["<< BIT[ii]<<"]";
        }*/
   // cout << imn << "<- " << i << "->" << imx << endl;
        if(i%2==0){
            //cout << v[imx] << "imx " << endl;
            cout << querymx(v[imx], tamanhoVector) << endl;

           /* if(imx>v[imx]){
                cout << query2(v[imx], imx) << endl;
            } else{
                cout << query2(imx, v[imx]-1) << endl;
            }*/
            update(v[imx], -1);
            imx--;
        }else{
            //cout << imn << endl;
            cout << querymn(1, v[imn]) << endl;

            /*if(imn>v[imn]){
                cout << query2(v[imn], imn) << endl;
            } else{
                cout << query2(imn, v[imn]) << endl;

            }*/
            update(v[imn], -1);
            imn++;
        }
        if(imx==imn){
            break;
        }
    }
    cout << 0 << endl;    
}
