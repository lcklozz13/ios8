/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AVMediaSelectionOption, AVPlayerController, UITableView;

@interface AVMediaSelectionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    AVMediaSelectionOption *_selectedAudioMediaSelectionOption;
    AVMediaSelectionOption *_selectedLegibleMediaSelectionOption;
    AVPlayerController *_playerController;
    id _doneButtonHandler;
}

@property(copy, nonatomic) id doneButtonHandler; // @synthesize doneButtonHandler=_doneButtonHandler;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_doneButtonTapped:(id)arg1;
- (_Bool)_isSelectedOrCurrentLegibleMediaSelectionOption:(id)arg1;
- (_Bool)_isSelectedOrCurrentAudioMediaSelectionOption:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

@end

