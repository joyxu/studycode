/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c CarAdaptor -a CarAdaptor.h:CarAdaptor.cpp car.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "CarAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class CarAdaptor
 */

CarAdaptor::CarAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

CarAdaptor::~CarAdaptor()
{
    // destructor
}

void CarAdaptor::startup()
{
    // handle method call com.soulxu.dbus.qt.car.startup
    QMetaObject::invokeMethod(parent(), "startup");
}

void CarAdaptor::stop()
{
    // handle method call com.soulxu.dbus.qt.car.stop
    QMetaObject::invokeMethod(parent(), "stop");
}

