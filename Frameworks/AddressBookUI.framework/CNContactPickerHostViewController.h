/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UIRemoteViewController.h"

#import <AddressBookUI/CNContactPickerContentViewController-Protocol.h>
#import "CNContactPickerHostProtocol-Protocol.h"

@class NSExtension;

@interface CNContactPickerHostViewController : _UIRemoteViewController <CNContactPickerContentViewController, CNContactPickerHostProtocol>
{
    id <CNContactPickerContentDelegate> _delegate;
    id <NSCopying> _currentRequestIdentifier;
    NSExtension *_extension;
}

+ (_Bool)getViewController:(id)arg1;
+ (id)contextForIdentifier:(id)arg1;
+ (id)contactPickerExtension;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) id <NSCopying> currentRequestIdentifier; // @synthesize currentRequestIdentifier=_currentRequestIdentifier;
@property __weak id <CNContactPickerContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pickerDidCancel;
- (void)pickerDidSelectContactWithVCardData:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(int)arg3;
- (void)invalidate;
- (void)setupWithOptions:(id)arg1 readyBlock:(id)arg2;

@end
