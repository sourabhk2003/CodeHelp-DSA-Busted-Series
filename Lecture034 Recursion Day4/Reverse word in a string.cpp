string reverseString(string &str) { 
    // Write your code here.
    stringstream ss(str);
    string word, result = "";
    while (ss >> word) {
        result = word + " " + result; // Add the current word at the beginning of the result
    }
    return result;
}
