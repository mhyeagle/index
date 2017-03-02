#ifndef BITMAP_INDEX__
#define BITMAP_INDEX__

#include <iostream>
#include <bitset>
#include <string>
#include <unordered_map>

namespace bitmapindex{
using namespace std;

class BitmapIndex {
public:
    BitmapIndex();
    ~BitmapIndex();

    int insert();
    int search();

private:
    int bitset_size__;
    shared_ptr<map<string, string> > docid_map__;
    shared_ptr<map<string, void*> > bitmap__;
};

} //bitmapindex

#endif //BITMAP_INDEX__
