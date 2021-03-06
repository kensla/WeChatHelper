//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "IVOIPUILogicMgrExt.h"
#import "SightDraftBoxToolbarDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSMutableArray, NSString, SightDraftBoxToolbar, SightRecordProgressBar, UIButton, UIImage, UIImageView, UILabel, UIView, UIView<SightPreviewView>;

@interface ShortVideoToolbar : MMUIView <IVOIPUILogicMgrExt, UIAlertViewDelegate, SightDraftBoxToolbarDelegate, UITextFieldDelegate>
{
    _Bool m_isActive;
    double m_topPositon;
    double m_dragDeltaFix;
    id <ShortVideoBarDelegate> m_delegate;
    UIView<SightPreviewView> *m_view;
    int m_btnState;
    int m_recordState;
    int m_cameraState;
    _Bool m_dragZoomTrigger;
    _Bool m_inCombolMode;
    _Bool m_writerTimeout;
    unsigned int m_currWriterID;
    NSMutableArray *m_recordIDAry;
    UIView *m_contentView;
    UIButton *m_captureBtn;
    UIView *m_toolBar;
    UIButton *m_hideBarBtn;
    UIView *m_kitchenBtn;
    UIImage *m_btnIconImgCancel;
    UIImage *m_btnIconImgNormal;
    UIImageView *m_btnIconImg;
    UIView *m_tipsView;
    UILabel *m_tipsLabel;
    UIImageView *m_tipsLabelBG;
    unsigned int m_tipsCounter;
    UILabel *m_zoomTipsLabel;
    UIView *m_cancelTips;
    UIView *m_topBar;
    UIView *m_topBarIcon;
    UIView *m_topBarIconActive;
    UIImage *m_viewCaptureFrame;
    UIImageView *m_senterAnimView;
    UIView *m_maskWindow;
    SightRecordProgressBar *m_maskCapturerBg;
    UIImageView *m_maskCapturerFg;
    double startTime;
    _Bool m_requestAuthAccess;
    UIView *m_motionTipsView;
    _Bool m_motionDetected;
    _Bool m_lightBoostStat;
    _Bool m_lightBoostOpenStat;
    unsigned int m_validReshowLightBoostCmd;
    unsigned int m_lightDetectorCounter;
    UIButton *m_lightBoostButton;
    UILabel *m_lightBoostHintView;
    SightDraftBoxToolbar *m_draftBar;
    unsigned int m_draftCounter;
    _Bool m_shouldContinueRecording;
    _Bool m_hasRealStartedForPreStartRecording;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool active; // @synthesize active=m_isActive;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)backToCameraState;
- (id)blurryImage:(id)arg1 withBlurLevel:(double)arg2;
- (void)btnDragInside;
- (void)btnDragOutSide;
- (void)btnDragging:(id)arg1;
- (void)btnPress;
- (void)btnRelease;
@property(nonatomic) int btnState; // @synthesize btnState=m_btnState;
@property(nonatomic) int cameraState; // @synthesize cameraState=m_cameraState;
- (void)cancelWriter;
- (void)closeLightBoots;
- (void)deActiveDraftBar;
- (void)deActiveDraftBarWithoutAnim;
- (void)deActiveWithoutAnimation;
- (void)dealloc;
@property(nonatomic) __weak id <ShortVideoBarDelegate> delegate; // @synthesize delegate=m_delegate;
- (void)fadeInTips;
- (void)finishWriter;
- (void)focusCenter;
- (id)getShineAnim;
- (id)getSubImage:(struct CGRect)arg1 inImage:(id)arg2;
- (void)handleFocusTap:(id)arg1 inView:(id)arg2;
- (void)handlePanPreview:(id)arg1;
- (void)handleZoomTap:(id)arg1;
- (void)hideCancelTips;
- (void)hideRightZoomTips;
- (void)hideTips;
- (void)hideTopBar;
- (void)initBackgroundView;
- (void)initMaskView;
- (void)initPreView;
- (void)initTipsLabel;
- (void)initToolBar;
- (void)initTopBar;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)lightNormal;
- (void)lightTooLow;
- (void)logicCheckState:(int)arg1;
- (id)makeBGMaskView;
- (void)onBtnClick:(id)arg1;
- (void)onCameraAudioOK;
- (void)onCameraPreviewOK;
- (void)onCameraStop;
- (void)onCaptureFrameAfterMovieSent:(id)arg1;
- (void)onCloseDraftBox;
- (void)onCloseSight;
- (void)onDrag:(struct CGPoint)arg1;
- (void)onDragEnd:(double)arg1;
- (void)onKitchen;
- (void)onMovieCompressFinished:(id)arg1;
- (void)onSelectSightDraft:(id)arg1;
- (void)onShaky;
- (void)onTakenPicture:(id)arg1;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)onWriterFailed:(id)arg1;
- (void)onWriterResign;
- (void)openLightBoots;
- (void)pauseCamera;
- (void)prepareRecord;
- (void)protectHide;
@property(nonatomic) int recordState; // @synthesize recordState=m_recordState;
- (void)releasePreview;
- (void)resetMotionTipsView;
- (void)reshowLightBoostButton:(_Bool)arg1;
- (void)resumeCamera;
- (void)setActive:(_Bool)arg1 fromShake:(_Bool)arg2;
@property(nonatomic) double topPosition; // @synthesize topPosition=m_topPositon;
- (void)setupMotionDetector;
- (void)showCancelTips;
- (void)showDraftBar;
- (void)showLightBoostButton:(_Bool)arg1;
- (void)showLightBoostButton:(_Bool)arg1 withAnim:(_Bool)arg2;
- (void)showLightBoostHint;
- (void)showMaskWindow;
- (void)showRightZoomTips;
- (void)showTips:(id)arg1 ofColor:(id)arg2 animType:(unsigned int)arg3;
- (void)showTips:(id)arg1 ofColor:(id)arg2 animType:(unsigned int)arg3 fontSize:(double)arg4;
- (void)showTopBar;
- (float)sightCaptureMaxDuration;
- (void)startActiveAnimation:(_Bool)arg1;
- (void)startDeactiveAnimation;
- (void)startLightBoostAnimation;
- (void)startWriter;
- (void)styleLightBoostButton:(_Bool)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)tryCancelPreStartRecording;
- (void)tryCreatePreview;
- (void)turnBarCanceling;
- (void)turnBarNormalize;
- (void)turnBarRecording;
- (void)turnBarRecording:(_Bool)arg1;
- (void)turnBarRecordingLongAnim;
- (void)updateBlurImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

