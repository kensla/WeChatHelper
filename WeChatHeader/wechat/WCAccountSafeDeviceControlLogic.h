//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "WCAccountBindPhoneForRegCGIDelegate.h"
#import "WCAccountNewDeviceViewControllerDelegate.h"
#import "WCAccountPhoneVerifyViewControllerDelegate.h"
#import "WCAccountVoiceVerifyViewControllerDelegate.h"

@class NSString, WCAccountBindPhoneForRegCGI;

@interface WCAccountSafeDeviceControlLogic : WCAccountBaseControlLogic <WCAccountNewDeviceViewControllerDelegate, WCAccountPhoneVerifyViewControllerDelegate, WCAccountVoiceVerifyViewControllerDelegate, WCAccountBindPhoneForRegCGIDelegate>
{
    WCAccountBindPhoneForRegCGI *m_modelLogic;
    id <WCAccountSafeDeviceControlLogicDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)ParseFromXml:(id)arg1;
- (void)cancelAllEvent;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (void)onCheckSafeDeviceVerifyCode:(id)arg1;
- (void)onGetSafeDeviceVerifyCode:(id)arg1 authTicket:(id)arg2 StyleKeyValue:(id)arg3;
- (void)onGetSafeDeviceVoiceVerifyCode:(id)arg1 authTicket:(id)arg2 StyleKeyValue:(id)arg3;
- (void)onNewDeviceBack;
- (void)onNewDeviceVerifyPhone;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyBack;
- (void)onPhoneVerifyNext:(id)arg1;
- (void)onPhoneVerifyVoice;
- (void)onVoiceVerifyBack;
- (void)onVoiceVerifyGetVerifyCode:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startLogicFromManualAuth:(_Bool)arg1;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
