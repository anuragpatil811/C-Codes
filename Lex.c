#include <iostream>
#include <vector>
#include <cctype>
#include <unordered_set>

using namespace std;

// SQL Keywords
unordered_set<string> sqlKeywords = {"SELECT", "FROM", "WHERE", "AND", "OR", "INSERT", "UPDATE", "DELETE"};

// Token structure
struct Token {
    string value;
    string type;
};

// Function to check if a string is a keyword
bool isKeyword(const string &word) {
    return sqlKeywords.find(word) != sqlKeywords.end();
}

// Function to tokenize SQL query
vector<Token> tokenizeSQL(const string &query) {
    vector<Token> tokens;
    int i = 0, n = query.length();

    while (i < n) {
        if (isspace(query[i])) { 
            i++; 
            continue; 
        }

        if (isalpha(query[i])) { // Keywords or Identifiers
            string word;
            while (i < n && (isalnum(query[i]) || query[i] == '_')) 
                word += toupper(query[i++]);
            tokens.push_back({word, isKeyword(word) ? "KEYWORD" : "IDENTIFIER"});
        }
        else if (isdigit(query[i])) { // Numbers
            string number;
            while (i < n && isdigit(query[i])) 
                number += query[i++];
            tokens.push_back({number, "NUMBER"});
        }
        else if (query[i] == '\'' || query[i] == '"') { // String Literals
            char quote = query[i++];
            string str;
            while (i < n && query[i] != quote) 
                str += query[i++];
            i++; 
            tokens.push_back({quote + str + quote, "STRING_LITERAL"});
        }
        else { // Operators or unknown
            tokens.push_back({string(1, query[i]), "OPERATOR"});
            i++;
        }
    }
    return tokens;
}

// Main function
int main() {
    string query = "SELECT name FROM users WHERE age >= 18 AND city = 'New York';";
    vector<Token> tokens = tokenizeSQL(query);

    for (const auto &token : tokens) 
        cout << "[" << token.type << "] " << token.value << endl;

    return 0;
}
