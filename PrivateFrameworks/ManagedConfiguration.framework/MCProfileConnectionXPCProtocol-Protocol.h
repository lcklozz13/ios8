/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MCProfileConnectionXPCProtocol <NSObject>
- (void)doMCICDidRequestCurrentPasscodeWithCompletion:(id)arg1;
- (void)doMCICDidRequestShowUserWarnings:(id)arg1 completion:(id)arg2;
- (void)doMCICDidFinishPreflightWithError:(id)arg1 completion:(id)arg2;
- (void)doMCICDidRequestUserInput:(id)arg1 completion:(id)arg2;
- (void)doMCICDidFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 completion:(id)arg3;
- (void)doMCICDidBeginInstallingNextProfileData:(id)arg1 completion:(id)arg2;
- (void)doMCICDidUpdateStatus:(id)arg1 completion:(id)arg2;
@end
