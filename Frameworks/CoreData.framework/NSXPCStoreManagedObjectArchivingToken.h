/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSURL;

// Not exported
@interface NSXPCStoreManagedObjectArchivingToken : NSObject <NSCoding, NSSecureCoding>
{
    NSURL *_managedObjectReferenceURI;
}

+ (_Bool)supportsSecureCoding;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)URI;
- (id)initWithURI:(id)arg1;

@end

