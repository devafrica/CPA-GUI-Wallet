#ifndef PAYMENTSERVER_H
#define PAYMENTSERVER_H


// sends them to the server.

#include <QObject>
#include <QString>

class QApplication;
class QLocalServer;

class PaymentServer : public QObject
{
    Q_OBJECT

private:
    bool saveURIs;
    QLocalServer* uriServer;

public:
    // Returns true if there were URIs on the command line
    // which were successfully sent to an already-running
    // process.
    static bool ipcSendCommandLine();

    PaymentServer(QApplication* parent);

    bool eventFilter(QObject *object, QEvent *event);

public slots:
    // Signal this when the main window's UI is ready
    // to display payment requests to the user
    void uiReady();

private slots:
    void handleURIConnection();

Q_SIGNALS:
    void receivedURI(QString);

};

#endif // PAYMENTSERVER_H
