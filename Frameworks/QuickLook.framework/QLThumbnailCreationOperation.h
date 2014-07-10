/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSError, NSURL, UIImage;

@interface QLThumbnailCreationOperation : NSOperation
{
    UIImage *_image;
    NSError *_error;
    NSURL *_documentURL;
    double _maximumDimension;
    double _scaleFactor;
    unsigned long long _useMode;
    struct CGRect _contentRect;
}

@property unsigned long long useMode; // @synthesize useMode=_useMode;
@property double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property double maximumDimension; // @synthesize maximumDimension=_maximumDimension;
@property(retain) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) UIImage *image; // @synthesize image=_image;
@property struct CGRect contentRect; // @synthesize contentRect=_contentRect;
- (void)main;

@end
