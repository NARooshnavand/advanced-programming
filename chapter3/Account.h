#include <string>

class Account{
    public:
        explicit Account(std::string accountName,int cBalance):name{accountName}
        {
            if(cBalance > 50)
            {
                balance = cBalance;
            }
        }
        std::string getName() const{
            return name;
        }
        void setName(std::string theName){
            name = theName;
        }
        int getBalance(){
            return balance;
        }
        
    private:
        std::string name;
        int balance{50};
};