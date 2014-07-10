/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIAlertView.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString;

@interface GKLoginAlertView : UIAlertView <UITextFieldDelegate>
{
    NSString *_username;
    unsigned long long _passwordFieldIndex;
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)_updateFrameForDisplay;
- (_Bool)textFieldShouldReturn:(id)arg1;
@property(copy, nonatomic) NSString *password; // @dynamic password;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 uneditableUsername:(id)arg2;

@end
