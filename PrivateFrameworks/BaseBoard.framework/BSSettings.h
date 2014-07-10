/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BSXPCCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSMapTable;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding>
{
    id <BSSettingDescriptionProvider> _descriptionProvider;
    NSMapTable *_settingToFlagMap;
    NSMapTable *_settingToObjectMap;
}

@property(nonatomic) __weak id <BSSettingDescriptionProvider> descriptionProvider; // @synthesize descriptionProvider=_descriptionProvider;
- (id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;
- (void)_setObject:(id)arg1 forSetting:(unsigned long long)arg2;
- (void)_setFlag:(long long)arg1 forSetting:(unsigned long long)arg2;
- (void)_applyToSettings:(id)arg1;
- (void)_enumerateSettingsInMap:(id)arg1 withBlock:(id)arg2;
- (id)_newMapTable;
- (void)_enumerateSettingsForObjectsWithBlock:(id)arg1;
- (void)_enumerateSettingsForFlagsWithBlock:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)basicDescriptionWithPrefix:(id)arg1;
- (id)allSettings;
- (void)enumerateObjectsWithBlock:(id)arg1;
- (id)objectForSetting:(unsigned long long)arg1;
- (void)enumerateFlagsWithBlock:(id)arg1;
- (_Bool)boolForSetting:(unsigned long long)arg1;
- (long long)flagForSetting:(unsigned long long)arg1;
- (_Bool)isEmpty;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end
