auto cmp = [](array<int, 3> a1, array<int, 3> a2) {
    if (a1[1] != a2[1]) {
        return a1[1] > a2[1]; // sort by greater second element
    } else if (a1[2] != a2[2]) {
        return a1[2] < a2[2]; // sort by smaller third element
    } else {
        return a1[0] < a2[0]; // sort by smaller first element
    }
};

// Set
set<array<int, 3>, decltype(cmp)> s(cmp);

// Vector
vector<array<int, 3> > v;
sort(all(v), cmp);

// Vector with n custom ordered sets of pairs
vector<set<pair<char, int>, decltype(&cmp)>> v(n, set<pair<char, int>, decltype(&cmp)>(cmp));