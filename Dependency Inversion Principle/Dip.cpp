#include "iostream"

using namespace std;

class INotification{
    public:
        virtual void send() = 0;
};

class EmailNotification : public INotification{
    public:
        void send(){
            cout << "Sending Email Notification" << endl;
        }
};

class SMSNotification : public INotification{
    public:
        void send(){
            cout << "Sending SMS Notification" << endl;
        }
};

class SendNotification{
    INotification& notification;
    public:
        SendNotification(INotification& par) : notification(par){}

        void sendNotification(){
            notification.send();
        }
};

int main()
{
    SMSNotification sms;
    SendNotification notifier(sms);
    notifier.sendNotification();
    
    return 0;
}
