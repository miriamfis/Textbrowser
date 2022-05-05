#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>

const int TIMEOUT = 5000;   // 1 second

class HttpClient : public QObject
{
    Q_OBJECT
public:
    explicit HttpClient(int argc, char* argv[], QObject *parent = nullptr);

public slots:
    void connected();
    void readyRead();

private:
    QTcpSocket *m_socket;
    QByteArray m_hostname;
};
