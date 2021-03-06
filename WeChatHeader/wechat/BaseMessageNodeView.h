//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "EmoticonDescMgrExt.h"
#import "IAppDataExt.h"
#import "IContactMgrExt.h"
#import "IEnterpriseContactMgrExt.h"
#import "IHeadImageExt.h"
#import "IKFContactExt.h"
#import "IQQContactMgrExt.h"
#import "IStrangerContactMgrExt.h"
#import "MMIconActionSheetDelegate.h"
#import "UIViewForceTouchShakeProtocol.h"
#import "WCActionSheetDelegate.h"
#import "WCForceTouchPreviewProtocol.h"
#import "WCForceTouchTriggerLongPressProtocol.h"

@class AppMessageBlockButton, CBaseContact, CMessageWrap, CTRichTextView, MMCPLabel, MMIconActionSheet, NSArray, NSString, UIActivityIndicatorView, UIButton, UIImageView, UIView;

@interface BaseMessageNodeView : MMUIView <IHeadImageExt, IContactMgrExt, IQQContactMgrExt, IStrangerContactMgrExt, WCActionSheetDelegate, IAppDataExt, MMIconActionSheetDelegate, EmoticonDescMgrExt, IKFContactExt, IEnterpriseContactMgrExt, UIViewForceTouchShakeProtocol, WCForceTouchPreviewProtocol, WCForceTouchTriggerLongPressProtocol>
{
    CMessageWrap *m_oMessageWrap;
    CBaseContact *m_oContact;
    CBaseContact *m_oChatContact;
    id <messageNodeViewDelegate> m_delegate;
    unsigned int m_uiTouchBeginTime;
    _Bool m_bIsLongPressHandled;
    unsigned int m_eNodeType;
    UIView *m_oContentView;
    UIView *m_oHeadImageView;
    UIButton *m_oCommentButton;
    MMCPLabel *m_oChatRoomNameLabel;
    UIImageView *m_oBkgImageView;
    UIImageView *m_oMaskImageView;
    _Bool m_bHasLayout;
    double m_lastScreenWidth;
    double m_fContentViewLeftMargin;
    double m_fContentViewRightMargin;
    double m_fContentMarginLeft;
    double m_fContentMarginTop;
    long long m_orientation;
    NSArray *m_arrMenuItems;
    UIButton *m_oSendFailButton;
    UIImageView *m_oSendOKView;
    UIActivityIndicatorView *m_oActivityIndicator;
    UIButton *m_oAppBottomButton;
    UIView *m_oAppInfoView;
    AppMessageBlockButton *m_oAppMessageBlockButton;
    _Bool m_donorIconHidden;
    _Bool m_bSendOKShowAnimate;
    double m_fHeightInSizeForFrame;
    _Bool m_bMenuVC;
    MMIconActionSheet *m_iconActionSheet;
    NSString *m_cpKeyForChatRoomMessage;
    _Bool m_isChatRoomMessageUnsafe;
    _Bool m_touchEnded;
    CTRichTextView *m_crashWarningLabel;
    NSString *m_cpKeyForChatRoomDisplayName;
    _Bool m_isChatRoomDisplayNameUnsafe;
    _Bool m_isConverting3dTouchToLongPress;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)LongPressEvents;
- (void)MenuControllerWillHide:(id)arg1;
- (void)OnAppInfoChanged:(id)arg1;
- (void)OnAppWatermarkChanged:(id)arg1;
- (void)OnLongPressGesture:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithItem:(id)arg2;
- (void)addFavorite;
- (void)calculateLeftRightMargin;
- (void)calculateSize;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPeek;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canShowFavMenu;
- (_Bool)canShowMoreMenu;
- (_Bool)canShowRevokeMenu;
- (_Bool)canShowSendTo3rdApp;
- (_Bool)canShowSendToDevices;
- (void)checkLayoutSubviewsForMessageWrap;
- (void)clearActivityView;
- (void)clearAppBottomButton;
- (void)clearAppInfoView;
- (void)clearAppInfoViewInside;
- (void)clearSendFailButton;
- (void)clearSendOKView;
- (void)dealloc;
@property(readonly, nonatomic) __weak UIView *forceTouchShakeView;
- (void)forward;
- (double)getAppInfoBottomOriginX;
- (id)getCurrentNodeAccessibilityDescription:(id)arg1;
- (id)getMoreMainInfomationAccessibilityDescription;
- (struct CGPoint)getSendOKViewOrgin;
- (_Bool)hasForwardInList:(id)arg1;
- (void)hideUIStatus;
- (_Bool)ifAppInfoAreaInContent;
- (_Bool)ifShowAppInfo;
- (void)initAcitivityView;
- (void)initAppBottomButton;
- (void)initAppInfoView;
- (void)initAppInfoViewInside;
- (void)initAppMessageBlockButton;
- (void)initChatRoomNameLabel;
- (void)initCommentButton;
- (void)initCrashWarningLabel;
- (void)initHeadImageView;
- (void)initMaskCoverView;
- (void)initSendFailButton;
- (void)initSendOKView;
- (id)initWithMessageWrap:(id)arg1 Contact:(id)arg2 ChatContact:(id)arg3;
- (_Bool)isLocationMessage;
- (_Bool)isPortait;
- (_Bool)isShowChatRoomDisplayName;
- (_Bool)isTouchInView:(id)arg1;
- (void)launch:(id)arg1;
- (void)layoutForCrashWarning;
- (void)layoutSubviews;
- (void)layoutSubviewsInternal;
@property(nonatomic) __weak id <messageNodeViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned int m_eNodeType; // @synthesize m_eNodeType;
- (id)m_msgWrap;
@property(readonly, nonatomic) UIView *m_oContentView; // @synthesize m_oContentView;
@property(nonatomic) long long m_orientation; // @synthesize m_orientation;
- (void)onAppear;
- (void)onBrandConnector:(id)arg1;
- (void)onClearResource;
- (void)onComment;
- (void)onDebug:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onDisappear;
- (void)onDownloadAppAttachCommonFail:(id)arg1;
- (void)onDownloadAppAttachExpireFail:(id)arg1;
- (void)onDownloadVideoCommonFail:(id)arg1;
- (void)onDownloadVideoExpireFail:(id)arg1;
- (void)onEndTouch;
- (void)onForward:(id)arg1;
- (void)onGetEmoticonDesc:(id)arg1 forMd5:(id)arg2;
- (void)onHeadImageChange:(id)arg1;
- (void)onHeadImageClicked:(id)arg1;
- (void)onKFContactHeadImgUpdate:(id)arg1;
- (void)onLongTouch;
- (void)onMenuItemWillHide;
- (void)onModifyContact:(id)arg1;
- (void)onModifyEnterpriseContact:(id)arg1;
- (void)onModifyKFContact:(id)arg1;
- (void)onModifyQQContact:(id)arg1;
- (void)onOrientationChanged;
- (void)onRestore:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)pressedEvents;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)reCalculateSizeIfNeed;
- (void)reLayoutSubviews;
- (void)resend:(id)arg1;
- (void)revokeMsg:(id)arg1;
- (void)setDonorIconHidden:(_Bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setupWatchSourceBadgeIfNeed;
- (void)shareMsgToOpenSDK:(id)arg1;
- (_Bool)shouldShowForwardBrandItem;
- (void)showConnectorSheet:(id)arg1;
- (void)showOperationMenu:(id)arg1;
- (void)showOperationMenu:(id)arg1 NeedDelete:(_Bool)arg2;
- (void)showOperationMenuWithoutDelete:(id)arg1 CanBeForward:(_Bool)arg2;
- (void)showUIStatus;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)updateAppBottomButton;
- (void)updateAppInfoView;
- (void)updateAppInfoViewInside;
- (void)updateBkgImage:(_Bool)arg1;
- (void)updateChatContact:(id)arg1;
- (void)updateChatRoomDisplayNameCrashProtectedState;
- (void)updateChatRoomMessageCrashProtectedState;
- (void)updateMessageContent:(id)arg1;
- (void)updateNodeStatus:(id)arg1;
- (void)updateStatus:(id)arg1;
- (void)updateThumbImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

