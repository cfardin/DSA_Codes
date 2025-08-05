// Sive Algorithm is used to find the prime numbers from 0 to N ranged 
// Complexity of Sive's algoritm is O(nlog logn)

vector<bool> arr(int n){
    vector<bool> primes(n+1, true);

    primes[0] = false;
    primes[1] = false;

    for(int i=2; i * i <= n; i++){
        if(primes[i] == true){
            for(int j=i*i; j<=n; j+=i){
                primes[j] = false;
            }
        }
    }
    return primes;
}
// For printing all the prime numbers in N ranged.
void prime_print(int n){
    vector<bool> v = arr(n);
    for(int i=0; i<n; i++){
        if(v[i] == true) cout << i << " ";
    }
}

int main(){
  int n; cin >> n;
  prime_print(n);
}
