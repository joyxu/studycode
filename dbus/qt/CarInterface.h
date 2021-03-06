/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c CarInterface -p CarInterface.h:CarInterface.cpp car.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef CARINTERFACE_H_1277881872
#define CARINTERFACE_H_1277881872

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.soulxu.dbus.qt.car
 */
class CarInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.soulxu.dbus.qt.car"; }

public:
    CarInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~CarInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> startup()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("startup"), argumentList);
    }

    inline QDBusPendingReply<> stop()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("stop"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void stoped();
};

namespace com {
  namespace soulxu {
    namespace dbus {
      namespace qt {
        typedef ::CarInterface car;
      }
    }
  }
}
#endif
