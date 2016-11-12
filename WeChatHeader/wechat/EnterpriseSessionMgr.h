//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IContactMgrExt.h"
#import "IEnterpriseContactMgrExt.h"
#import "IEnterpriseGroupMgrExt.h"
#import "IEnterpriseMsgExt.h"
#import "IMMNewSessionMgrExt.h"
#import "ISessionInfoExt.h"
#import "ISessionStorageDelegate.h"
#import "MMService.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface EnterpriseSessionMgr : MMService <ISessionInfoExt, MMService, ISessionStorageDelegate, IEnterpriseMsgExt, IEnterpriseContactMgrExt, IEnterpriseGroupMgrExt, IMMNewSessionMgrExt, IContactMgrExt>
{
    NSMutableDictionary *m_brandStorages;
    NSMutableDictionary *m_mainSessionInfoItems;
    NSString *m_nsActiveSessionId;
    NSObject<OS_dispatch_queue> *m_msgDispatchQueue;
}

- (void).cxx_destruct;
- (id)InfoItemForBrand:(id)arg1;
- (id)InfoItemForBrand:(id)arg1 needFillMainSession:(_Bool)arg2;
- (id)LastMsgForBrand:(id)arg1;
- (void)OnAddEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)OnAddMsgListForSession:(id)arg1 Brand:(id)arg2;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 DelAll:(_Bool)arg3;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 MsgWrap:(id)arg3;
- (void)OnModEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)OnSyncReadMsg:(id)arg1 Brand:(id)arg2 ReadMsgCount:(unsigned int)arg3;
- (void)OnUnReadEnterpriseMsgCountChange:(id)arg1 Brand:(id)arg2;
- (id)allSessionInfoForBrand:(id)arg1;
- (void)changeUnReadCountOfSession:(id)arg1 forBrand:(id)arg2 to:(unsigned int)arg3;
- (void)checkChatBrand:(id)arg1;
- (void)cleanUpEnterpriseChat:(id)arg1;
- (void)cleanUpEnterpriseChatSession:(id)arg1;
- (void)clearAtMeCountOfSession:(id)arg1 forBrand:(id)arg2;
- (id)clearMainSessionUnReadForBrand:(id)arg1;
- (long long)compareSession:(id)arg1 rightSession:(id)arg2;
- (void)createSessionForEnterpriseContact:(id)arg1;
- (void)dealloc;
- (void)deleteAllSessionForBrand:(id)arg1;
- (void)deleteSession:(id)arg1 forBrand:(id)arg2;
- (id)filePathForMainSessionInfoCache;
- (id)getActiveSession;
- (id)importSessions;
- (id)init;
- (void)internalOnDeleteContact:(id)arg1;
- (_Bool)isActiveSession:(id)arg1;
- (void)isMessage:(id)arg1 Handled:(_Bool *)arg2;
- (void)isUser:(id)arg1 Handled:(_Bool *)arg2;
- (void)isUser:(id)arg1 hasSpecalSessionInfo:(id *)arg2;
- (void)loadMainSessionInfoItems;
- (id)mainSessionForBrand:(id)arg1;
- (void)onBatchModifyEnterpriseContact:(id)arg1;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onDeleteContact:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onEnterSessionListForBrand:(id)arg1;
- (void)onGetDraft:(id)arg1 draft:(id)arg2;
- (void)onInitiateBizChat:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onModifyContact:(id)arg1;
- (void)onModifyEnterpriseContact:(id)arg1;
- (void)onModifyEnterpriseContactDraft:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onServiceInit;
- (void)saveMainSessionInfoItems;
- (void)saveSessionInfo:(id)arg1 forBrand:(id)arg2;
- (unsigned int)sessionCountForBrand:(id)arg1;
- (id)sessionInfo:(id)arg1 forBrand:(id)arg2;
- (id)sessionInfoAtIndex:(long long)arg1 forBrand:(id)arg2;
- (void)setActiveSession:(id)arg1;
- (id)storageForBrand:(id)arg1;
- (void)updateMainSessionInfoForBrand:(id)arg1;
- (void)updateMainSessionToMM:(id)arg1;
- (id)updateMainSessionUnReadForBrand:(id)arg1;
- (void)updateSession:(id)arg1 forBrand:(id)arg2;
- (void)updateSessionInfo:(id)arg1 forBrand:(id)arg2;
- (id)updateUnReadOfMainSession:(id)arg1 brand:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
