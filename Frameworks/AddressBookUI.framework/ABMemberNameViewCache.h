/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCache;

@interface ABMemberNameViewCache : NSObject
{
    NSCache *_styleProvidersCache;
}

+ (id)sharedInstance;
- (id)_cacheForStyleProvider:(id)arg1;
- (id)disabledBoldTextAttributesForStyleProvider:(id)arg1;
- (id)disabledRegularTextAttributesForStyleProvider:(id)arg1;
- (id)placeholderTextAttributesForStyleProvider:(id)arg1;
- (id)boldTextAttributesForStyleProvider:(id)arg1;
- (id)regularTextAttributesForStyleProvider:(id)arg1;
- (id)memberNamePlaceholderFontForStyleProvider:(id)arg1;
- (id)memberNameBoldFontForStyleProvider:(id)arg1;
- (id)memberNameRegularFontForStyleProvider:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

