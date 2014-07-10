/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "EDImmutableObject-Protocol.h"

@class EDCollection, EDResources, NSString;

// Not exported
@interface EDPhoneticInfo : NSObject <EDImmutableObject>
{
    EDResources *mResources;
    unsigned long long mFontIndex;
    NSString *mString;
    int mType;
    int mAlign;
    EDCollection *mRuns;
    _Bool mDoNotModify;
}

+ (id)phoneticInfoWithResources:(id)arg1;
- (void)setDoNotModify:(_Bool)arg1;
- (id)runs;
- (void)setFont:(id)arg1;
- (id)font;
- (void)appendString:(id)arg1;
- (void)prependString:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (void)setAlign:(int)arg1;
- (int)align;
- (void)setType:(int)arg1;
- (int)type;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToEDPhoneticInfo:(id)arg1;
- (void)dealloc;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (unsigned long long)fontIndex;

@end
