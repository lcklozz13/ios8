/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAVCamera, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface IMAVCameraController : NSObject
{
    NSMutableArray *_cameras;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IMAVCamera *currentCamera;
- (void)_loadSavedCamera;
- (void)_rebuildCameraList;
- (id)cameraWithDeviceID:(unsigned int)arg1;
@property(readonly, retain, nonatomic) NSArray *cameras;
- (void)dealloc;
- (id)init;

@end

