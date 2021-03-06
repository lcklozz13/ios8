/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSString;

// Not exported
@interface UIKeyboardSliceSet : NSObject
{
    NSString *_ssid;
    NSMutableSet *_slices;
    struct CGRect _startRect;
    struct CGRect _endRect;
    double _leftWidth;
    double _rightWidth;
    double _mergePoint;
    NSMutableDictionary *_controlKeys;
}

+ (id)sliceSetWithDictionaryRepresenation:(id)arg1;
@property NSMutableDictionary *controlKeys; // @synthesize controlKeys=_controlKeys;
@property double mergePoint; // @synthesize mergePoint=_mergePoint;
@property double rightWidth; // @synthesize rightWidth=_rightWidth;
@property double leftWidth; // @synthesize leftWidth=_leftWidth;
@property struct CGRect endRect; // @synthesize endRect=_endRect;
@property struct CGRect startRect; // @synthesize startRect=_startRect;
@property(retain) NSString *sliceSetID; // @synthesize sliceSetID=_ssid;
@property(readonly) NSMutableSet *slices; // @synthesize slices=_slices;
- (id)description;
- (void)dealloc;
- (void)addSlice:(id)arg1;
- (id)initWithSliceID:(id)arg1;

@end

