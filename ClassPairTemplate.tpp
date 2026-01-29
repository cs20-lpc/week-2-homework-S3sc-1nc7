// Implement  ClassPairTemplate class constructor and print methods
void Pair::Pair(T1 f, T2 s){
    first = f;
    second = s;
}
void Pair::print(){
    cout << "("<< first << ", " << second << ")" << endl;
}