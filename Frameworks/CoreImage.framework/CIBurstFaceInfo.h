/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface CIBurstFaceInfo : NSObject
{
    int swFaceId;
    int swLastFrameSeen;
    int hwFaceId;
    int hwLastFrameSeen;
    struct CGPoint swCenter;
    struct CGSize swSize;
    struct CGPoint hwCenter;
    struct CGSize hwSize;
}

@property int hwLastFrameSeen; // @synthesize hwLastFrameSeen;
@property struct CGSize hwSize; // @synthesize hwSize;
@property struct CGPoint hwCenter; // @synthesize hwCenter;
@property int hwFaceId; // @synthesize hwFaceId;
@property int swLastFrameSeen; // @synthesize swLastFrameSeen;
@property struct CGSize swSize; // @synthesize swSize;
@property struct CGPoint swCenter; // @synthesize swCenter;
@property int swFaceId; // @synthesize swFaceId;
- (float)overlapWithSwRect:(struct CGRect)arg1;
- (float)overlapWithHwRect:(struct CGRect)arg1;
- (struct CGRect)swFaceRect;
- (struct CGRect)hwFaceRect;
- (id)init;

@end

