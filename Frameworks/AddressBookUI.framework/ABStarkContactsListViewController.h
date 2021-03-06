/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "ABContactViewControllerDelegate-Protocol.h"
#import "ABMembersDataSourceDelegate-Protocol.h"

@class ABMembersDataSource, ABModel, ABStarkNoContentBannerView, AVExternalDevice;

@interface ABStarkContactsListViewController : UITableViewController <ABMembersDataSourceDelegate, ABContactViewControllerDelegate>
{
    ABMembersDataSource *_dataSource;
    ABModel *_model;
    _Bool _limitedUI;
    id <ABStarkContactsListViewControllerDelegate> _peoplePickerDelegate;
    ABStarkNoContentBannerView *_overlayView;
    AVExternalDevice *_externalDevice;
}

@property(nonatomic) _Bool limitedUI; // @synthesize limitedUI=_limitedUI;
@property(retain, nonatomic) AVExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(retain, nonatomic) ABStarkNoContentBannerView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) id <ABStarkContactsListViewControllerDelegate> peoplePickerDelegate; // @synthesize peoplePickerDelegate=_peoplePickerDelegate;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (_Bool)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (_Bool)abDataSourceAllowsShowingPersonsCards:(id)arg1;
- (_Bool)abDataSource:(id)arg1 selectedPerson:(void *)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(_Bool)arg5;
- (void)removeMessageOverlay;
- (void)postMessageOverlay:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)limitedUINotification:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)init;

@end

