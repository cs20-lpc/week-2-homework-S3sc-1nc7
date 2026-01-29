// Implement  ClassPairTemplate class constructor and print methods

template <typename T1, typename T2>
void Pair::Pair(T1 f, T2 s){
    first = f;
    second = s;
}
void Pair::print(){
    cout << "("<< first << ", " << second << ")" << endl;
}