/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface _UIMotionAnalyzerHistory : NSObject
{
    struct UIOffset _lastAppliedViewerOffset;
    union _GLKQuaternion _lastAppliedRelativeQuaternion;
    _Bool _isApplyingHysteresis;
    union _GLKQuaternion _relativeQuaternionOnHysteresisEntry;
}

@end
