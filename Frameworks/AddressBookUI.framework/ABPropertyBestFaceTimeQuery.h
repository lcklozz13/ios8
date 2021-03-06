/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ABPropertyGroupItem, ABPropertyIDSRequest, NSArray, NSMutableArray;

@interface ABPropertyBestFaceTimeQuery : NSObject
{
    NSMutableArray *_faceTimeableItems;
    NSArray *_propertyItems;
    ABPropertyIDSRequest *_faceTimeIDSRequest;
}

@property(retain, nonatomic) ABPropertyIDSRequest *faceTimeIDSRequest; // @synthesize faceTimeIDSRequest=_faceTimeIDSRequest;
@property(retain, nonatomic) NSArray *propertyItems; // @synthesize propertyItems=_propertyItems;
@property(retain) NSMutableArray *faceTimeableItems; // @synthesize faceTimeableItems=_faceTimeableItems;
@property(readonly) ABPropertyGroupItem *bestFaceTimeProperty;
- (void)dealloc;
- (id)initWithPropertyItems:(id)arg1;

@end

