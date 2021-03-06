/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreBluetooth/CBPeer.h>

@class CBCentralManager, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface CBPeripheral : CBPeer
{
    id <CBPeripheralDelegate> _delegate;
    struct {
        unsigned int didUpdateName:1;
        unsigned int didModifyServices:1;
        unsigned int didInvalidateServices:1;
        unsigned int didReadRSSI:1;
        unsigned int didUpdateRSSI:1;
        unsigned int didDiscoverServices:1;
        unsigned int didDiscoverIncludedServices:1;
        unsigned int didDiscoverCharacteristics:1;
        unsigned int didUpdateCharacteristicValue:1;
        unsigned int didWriteCharacteristicValue:1;
        unsigned int didNotifyCharacteristicValue:1;
        unsigned int didDiscoverDescriptors:1;
        unsigned int didUpdateDescriptorValue:1;
        unsigned int didWriteDescriptorValue:1;
        unsigned int didReceiveTimeSync:1;
    } _delegateFlags;
    NSString *_name;
    NSNumber *_RSSI;
    long long _state;
    NSMutableArray *_services;
    CBCentralManager *_centralManager;
    NSMutableDictionary *_attributes;
    _Bool _isConnectedToSystem;
    unsigned long long _mtuLength;
}

@property unsigned long long mtuLength; // @synthesize mtuLength=_mtuLength;
@property(readonly, nonatomic) _Bool isConnectedToSystem; // @synthesize isConnectedToSystem=_isConnectedToSystem;
@property(retain) NSArray *services; // @synthesize services=_services;
@property long long state; // @synthesize state=_state;
@property(retain) NSNumber *RSSI; // @synthesize RSSI=_RSSI;
@property(retain) NSString *name; // @synthesize name=_name;
- (void)handleDescriptorValueWritten:(id)arg1;
- (void)handleDescriptorValueUpdated:(id)arg1;
- (void)handleCharacteristicDescriptorsDiscovered:(id)arg1;
- (void)handleCharacteristicValueNotifying:(id)arg1;
- (void)handleCharacteristicValueWritten:(id)arg1;
- (void)handleCharacteristicValueUpdated:(id)arg1;
- (void)handleServiceCharacteristicsDiscovered:(id)arg1;
- (void)handleServiceIncludedServicesDiscovered:(id)arg1;
- (void)handleDescriptorEvent:(id)arg1 descriptorSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(_Bool)arg4;
- (void)handleCharacteristicEvent:(id)arg1 characteristicSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(_Bool)arg4;
- (void)handleServiceEvent:(id)arg1 serviceSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(_Bool)arg4;
- (void)handleAttributeEvent:(id)arg1 args:(id)arg2 attributeSelector:(SEL)arg3 delegateSelector:(SEL)arg4 delegateFlag:(_Bool)arg5;
- (void)handleServicesDiscovered:(id)arg1;
- (void)handleTimeSyncResponse:(id)arg1;
- (void)handleWritesExecuted:(id)arg1;
- (void)handleRSSIUpdated:(id)arg1;
- (void)handleServicesChanged:(id)arg1;
- (void)handleNameUpdated:(id)arg1;
- (void)getTimeSyncData;
- (_Bool)hasTag:(id)arg1;
- (void)untag:(id)arg1;
- (void)tag:(id)arg1;
- (void)writeValue:(id)arg1 forDescriptor:(id)arg2;
- (void)readValueForDescriptor:(id)arg1;
- (void)discoverDescriptorsForCharacteristic:(id)arg1;
- (void)setNotifyValue:(_Bool)arg1 forCharacteristic:(id)arg2;
- (void)setBroadcastValue:(_Bool)arg1 forCharacteristic:(id)arg2;
- (void)reliablyWriteValues:(id)arg1 forCharacteristics:(id)arg2;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 type:(long long)arg3;
- (void)readValueForCharacteristic:(id)arg1;
- (void)discoverCharacteristics:(id)arg1 forService:(id)arg2;
- (void)discoverIncludedServices:(id)arg1 forService:(id)arg2;
- (void)discoverServices:(id)arg1;
- (void)readRSSI;
@property(readonly) _Bool isConnected; // @dynamic isConnected;
@property(nonatomic) __weak id <CBPeripheralDelegate> delegate; // @dynamic delegate;
- (void)setOrphan;
- (void)handleConnectionStateUpdated:(_Bool)arg1;
- (void)handleDisconnection;
- (void)handleConnection:(_Bool)arg1;
- (void)invalidateAllAttributes;
- (void)removeAttributeForHandle:(id)arg1;
- (void)setAttribute:(id)arg1 forHandle:(id)arg2;
- (id)attributeForHandle:(id)arg1;
- (void)handleMsg:(int)arg1 args:(id)arg2;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (void)sendMsg:(int)arg1 requiresConnected:(_Bool)arg2 args:(id)arg3;
- (void)sendMsg:(int)arg1 args:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithCentralManager:(id)arg1 dictionary:(id)arg2;

@end

