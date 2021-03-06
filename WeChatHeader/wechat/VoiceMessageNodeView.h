//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

#import "ChatBackgroundExt.h"
#import "IMsgRevokeExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "VoiceTransFloatViewDelegate.h"

@class MMTipsViewController, NSString, UIImageView, UILabel, VoiceTransFloatPreview;

@interface VoiceMessageNodeView : BaseMessageNodeView <ChatBackgroundExt, MMTipsViewControllerDelegate, VoiceTransFloatViewDelegate, IMsgRevokeExt>
{
    UILabel *m_oSecLabel;
    UIImageView *m_oPlayingImageView;
    UIImageView *m_oBackImageView;
    UIImageView *m_oUnreadImageView;
    UILabel *m_oFwdHintLabel;
    UIImageView *m_oFwdHintBkgImageView;
    _Bool m_bIsPlaying;
    _Bool m_bVoiceOverFoucused;
    MMTipsViewController *m_voiceTransIntro;
    VoiceTransFloatPreview *m_voiceTransFloatPreview;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (double)calculateVoiceTimeLength:(unsigned int)arg1;
- (_Bool)canShowVoiceTransMenu;
- (void)dealloc;
- (struct CGSize)forwardMsgSize;
- (struct CGPoint)getSendOKViewOrgin;
- (void)initBackImageView;
- (void)initForwardHintLabel;
- (void)initUnreadView;
- (id)initWithMessageWrap:(id)arg1 Contact:(id)arg2 ChatContact:(id)arg3;
- (_Bool)isForwardMsg;
- (_Bool)isTouchInView:(id)arg1;
- (void)layoutSubviewsInternal;
@property(retain, nonatomic) UILabel *m_oSecLabel; // @synthesize m_oSecLabel;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)onClearResource;
- (void)onClick;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)onDisappear;
- (void)onFavorite:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onLongTouch;
- (void)onMenuItemWillHide;
- (void)onMoreOperate:(id)arg1;
- (void)onSwitch:(id)arg1;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)onTransComplete;
- (void)onVoiceTrans:(id)arg1;
- (void)onWindowHide;
- (void)restartNodeViewAnimation;
- (void)showOpearation;
- (void)showVoiceTransView;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)startNodeViewAnimation;
- (void)stopNodeViewAnimation;
- (void)updateBkgImage:(_Bool)arg1;
- (void)updateSecLabelColor;
- (void)updateStatus:(id)arg1;
- (void)updateVoiceLength:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

