/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber;

@interface WKWindowFeatures : NSObject
{
    struct RetainPtr<NSNumber> _menuBarVisibility;
    struct RetainPtr<NSNumber> _statusBarVisibility;
    struct RetainPtr<NSNumber> _toolbarsVisibility;
    struct RetainPtr<NSNumber> _allowsResizing;
    struct RetainPtr<NSNumber> _x;
    struct RetainPtr<NSNumber> _y;
    struct RetainPtr<NSNumber> _width;
    struct RetainPtr<NSNumber> _height;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *height;
@property(readonly, nonatomic) NSNumber *width;
@property(readonly, nonatomic) NSNumber *y;
@property(readonly, nonatomic) NSNumber *x;
@property(readonly, nonatomic) NSNumber *allowsResizing;
@property(readonly, nonatomic) NSNumber *toolbarsVisibility;
@property(readonly, nonatomic) NSNumber *statusBarVisibility;
@property(readonly, nonatomic) NSNumber *menuBarVisibility;
- (id)_initWithWindowFeatures:(const struct WindowFeatures *)arg1;

@end

