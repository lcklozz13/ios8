/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSSet, NSString;

@interface AVMediaFileType : NSObject <NSCopying>
{
    NSString *_uti;
    long long _supportsSampleReferencesOnce;
    _Bool _supportsSampleReferences;
}

+ (id)isoFileTypes;
+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id *)arg2;
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)arg1;
+ (id)allFileTypeIdentifiers;
+ (void)initialize;
- (_Bool)supportsFormat:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)supportsOutputSettings:(id)arg1 reason:(id *)arg2;
@property(readonly, nonatomic) unsigned int audioFileTypeID;
@property(readonly, nonatomic) NSString *figFormatReaderFileFormat;
@property(readonly, nonatomic) NSString *UTI;
@property(readonly, nonatomic) _Bool supportsSampleReferences;
@property(readonly, nonatomic) NSSet *supportedMediaTypes;
@property(readonly, nonatomic) NSString *defaultFileExtension;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id *)arg2;

@end
