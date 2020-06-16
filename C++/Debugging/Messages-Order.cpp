#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message {

private:
    string text;
    int id;

public: 
    Message() {}
    
    Message(const int& id_, const string& text_){
         text = text_;
         id = id_;
    }
    
    const string& get_text() {
        return text;
    }
    
    const int& get_id() const {
        return id;
    }
};

bool operator<(const Message& lhs, const Message& rhs){
    return lhs.get_id() < rhs.get_id();
}

class MessageFactory {

private:
    int m_id = 0;

public:
    MessageFactory() {}
    Message create_message(const string& text) {
        return {m_id++, text};
    }
};

class Recipient {
