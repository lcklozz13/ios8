/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CameraKit/CAMCaptureRequest.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@interface CAMPanoramaCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying>
{
    long long _deviceOrientation;
    long long _captureDevice;
}

@property(readonly, nonatomic) long long captureDevice; // @synthesize captureDevice=_captureDevice;
@property(readonly, nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

