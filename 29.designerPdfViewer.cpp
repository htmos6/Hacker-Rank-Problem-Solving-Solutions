int designerPdfViewer(vector<int> h, string word) {
    int size_word = word.size();
    int max = 0;

    for (auto i = word.begin(); i<word.end(); i++) {
        if (h[(int(*i)- int('a'))] > max) {
            max = h[(int(*i)- int('a'))] ;
        }
    }
    return max*size_word;
}
