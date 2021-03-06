/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSString;

@interface NSProxy <NSObject>
{
    Class isa;
}

+ (id)description;
+ (void *)methodForSelector:(SEL)arg1;
+ (void *)instanceMethodForSelector:(SEL)arg1;
+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (_Bool)conformsToProtocol:(id)arg1;
+ (_Bool)isKindOfClass:(Class)arg1;
+ (_Bool)isMemberOfClass:(Class)arg1;
+ (_Bool)isSubclassOfClass:(Class)arg1;
+ (_Bool)isProxy;
+ (_Bool)isFault;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)performSelector:(SEL)arg1;
+ (unsigned long long)hash;
+ (_Bool)isEqual:(id)arg1;
+ (id)_copyDescription;
+ (id)debugDescription;
+ (struct _NSZone *)zone;
+ (_Bool)retainWeakReference;
+ (_Bool)allowsWeakReference;
+ (_Bool)_isDeallocating;
+ (_Bool)_tryRetain;
+ (void)finalize;
+ (void)dealloc;
+ (id)init;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (void)forwardInvocation:(id)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (_Bool)isAncestorOfObject:(id)arg1;
+ (_Bool)respondsToSelector:(SEL)arg1;
+ (id)mutableCopyWithZone:(struct _NSZone *)arg1;
+ (id)mutableCopy;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)copy;
+ (unsigned long long)retainCount;
+ (id)autorelease;
+ (oneway void)release;
+ (id)retain;
+ (id)self;
+ (Class)superclass;
+ (Class)class;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (_Bool)isFault;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_copyDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)_allowsDirectEncoding;
- (struct _NSZone *)zone;
- (void)finalize;
- (void)dealloc;
- (_Bool)retainWeakReference;
- (_Bool)allowsWeakReference;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)self;
- (Class)superclass;
- (Class)class;
- (_Bool)_conformsToProtocolNamed:(const char *)arg1;
- (struct objc_method_description *)methodDescriptionForSelector:(SEL)arg1;

@end

