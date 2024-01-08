
#include<bits/stdc++.h>

using namespace std;

const double eps = 1e-6;

double distance(pair<double, double> a, pair<double, double> b){
    return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
}

pair<double, double> trungdiem(pair<double, double> a, pair<double, double> b){
    return make_pair((a.first + b.first) / 2, (a.second + b.second) / 2);
}

pair<double, pair<double, double> > distancetoLine(pair<double, double> a, pair<double, double> b, pair<double, double> m){
    pair<double, pair<double, double> > res;
    double distance1 = distance(a, m);
    double distance2 = distance(b, m);

    if ((distance1 - distance2) < eps){
        res.first = distance1;
        res.second = trungdiem(a, b);
        return res;
    }
    else if (distance1 > distance2) {
        a = trungdiem(a, b);
        return distancetoLine(a, b, m);
    }
    else if (distance1 < distance2) {
        b = trungdiem(a, b);
        return distancetoLine(a, b, m);
    }

    return res;
}

void nhap(pair<double, double> &a){
    cout << "Nhap toa do diem: ";
    cin >> a.first >> a.second;
}

bool kiemtranamtrongtamgiac(pair<double, double> a, pair<double, double> b, pair<double, double> c, pair<double, double> m){
    double ab = distance(a, b);
    double bc = distance(b, c);
    double ca = distance(c, a);

    double am = distance(a, m);
    double bm = distance(b, m);
    double cm = distance(c, m);

    double p = (ab + bc + ca) / 2;
    double s = sqrt(p * (p - ab) * (p - bc) * (p - ca));

    double p1 = (ab + am + bm) / 2;
    double s1 = sqrt(p1 * (p1 - ab) * (p1 - am) * (p1 - bm));

    double p2 = (bc + bm + cm) / 2;
    double s2 = sqrt(p2 * (p2 - bc) * (p2 - bm) * (p2 - cm));

    double p3 = (ca + cm + am) / 2;
    double s3 = sqrt(p3 * (p3 - ca) * (p3 - cm) * (p3 - am));

    if (abs(s - s1 - s2 - s3) < eps) return true; // nam trong tam giac
    return false;
}

pair<double, double> solve(pair<double, double> a, pair<double, double> b, pair<double, double> c, pair<double, double> m){
    if (kiemtranamtrongtamgiac(a, b, c, m)){
        return m;
    }
    else { // nam ngoai tam giac
        
        pair<double, pair<double, double> > d1 = distancetoLine(a, b, m);
        pair<double, pair<double, double> > d2 = distancetoLine(a, c, m);
        pair<double, pair<double, double> > d3 = distancetoLine(b, c, m);
        pair<double, pair<double, double> > res = d1.first > d2.first ? d2 : d1;
        res = res.first > d3.first ? d3 : res;

        return res.second; 
    }
}

int main(){
    pair<double, double> a, b, c, m;
    cout << "Nhap toa do 3 diem cua tam giac" << endl;
    nhap(a);
    nhap(b);
    nhap(c);

    cout <<"Nhap toa do diem M: ";
    nhap(m);

    pair<double, double> res = solve(a, b, c, m);
    cout << "Diem M nam trong tam giac ABC va cach diem M nhat la: " << res.first << " " << res.second << endl;

    return 0;
}