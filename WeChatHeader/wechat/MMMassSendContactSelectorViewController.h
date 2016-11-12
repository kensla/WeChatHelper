//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIButton, UIImageView;

@interface MMMassSendContactSelectorViewController : MMSearchBarDisplayController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_arrAllContacts;
    NSMutableArray *_arrKeys;
    NSMutableDictionary *_dicContacts;
    MMTableView *_tableView;
    NSMutableArray *_arrFilteredContacts;
    NSMutableSet *_setSelectedContacts;
    UIButton *_panelBtn;
    UIImageView *_toolView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)doSearch:(id)arg1;
- (id)getRightBarButton:(_Bool)arg1;
- (id)init;
- (void)initData;
- (void)initSearchBar;
- (void)initTableView;
- (void)initToolView;
- (void)initView;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onDeSelectAll:(id)arg1;
- (void)onDone:(id)arg1;
- (void)onSelectAll:(id)arg1;
- (void)onTopBarFrameChanged;
- (id)parseContactKey:(id)arg1;
- (void)processContact:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
@property(retain, nonatomic) NSMutableSet *setSelectedContacts; // @synthesize setSelectedContacts=_setSelectedContacts;
- (void)showAlertTooMany;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)willShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
