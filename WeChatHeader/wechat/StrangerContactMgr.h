//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface StrangerContactMgr : MMService <MMService, PBMessageObserverDelegate>
{
    _Bool m_bMemCacheNeedReload;
    NSMutableDictionary *m_dicContacts;
    NSMutableDictionary *m_dicLastAccessTime;
    NSMutableDictionary *m_lastUpdateTime;
    NSMutableArray *m_arrQueue;
    NSMutableDictionary *m_dicGetingContacts;
    NSMutableArray *m_arrUploading;
    unsigned int m_uiCurEventID;
}

- (void).cxx_destruct;
- (void)CheckQueue;
- (id)GetUsrArray;
- (_Bool)InternalUpdateContact:(id)arg1;
- (_Bool)IsInQueue:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ReduceCache;
- (void)SetAccessTime:(id)arg1;
- (void)addContact:(id)arg1;
- (_Bool)checkIfForbiddenGetContact:(id)arg1;
- (void)clearMemoryCache;
- (void)dealloc;
- (void)forceUpdate:(id)arg1;
- (id)getContactByName:(id)arg1;
- (void)handleNewContact:(id)arg1;
- (void)onServiceInit;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (id)pathForData;
- (id)pathForOldData;
- (id)pathForOldTimeData;
- (id)pathForTimeData;
- (void)saveData;
- (void)tryLoadData;
- (void)updateContact:(id)arg1;
- (void)updateContactFromContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

