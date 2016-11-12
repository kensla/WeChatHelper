//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseEmoticonViewDelegate.h"
#import "ContactsSelectorControllerDelegate.h"
#import "IFacebookAuthExt.h"
#import "IMMAssetICloudExt.h"
#import "IMMFacebookMgrExt.h"
#import "IMMGrowTextViewExt.h"
#import "IMsgExt.h"
#import "InputControllerDelegate.h"
#import "MMTableViewInfoDelegate.h"
#import "MMTwitterAuthExt.h"
#import "SelectorControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextViewDelegate.h"
#import "WCFacadeExt.h"
#import "WCGroupTagViewControllerDelegate.h"
#import "WCTimelinePOIPickerViewControllerDelegate.h"
#import "scrollViewDelegate.h"

@class CLLocation, ContactsSelectorController, EmoticonBoardView, ImageSelectorController, MMGrowTextView, MMLoadingView, MMTableViewInfo, MMTimer, NSArray, NSString, UIButton, UIImageView, UIView, WCDataItem, WCInputController, WCLocationInfo, WCMusicInfo, WCSelectorView, WCTimelinePOIPickerViewController;

@interface WCNewCommitViewController : MMUIViewController <InputControllerDelegate, BaseEmoticonViewDelegate, IMMAssetICloudExt, WCGroupTagViewControllerDelegate, UIScrollViewDelegate, scrollViewDelegate, UITextViewDelegate, SelectorControllerDelegate, MMTableViewInfoDelegate, ContactsSelectorControllerDelegate, UIAlertViewDelegate, IMsgExt, WCFacadeExt, MMTwitterAuthExt, IMMFacebookMgrExt, IFacebookAuthExt, IMMGrowTextViewExt, WCTimelinePOIPickerViewControllerDelegate>
{
    MMTableViewInfo *_tableViewInfo;
    MMGrowTextView *_textView;
    UIView *_headView;
    WCSelectorView *_withImageView;
    WCSelectorView *_withContactView;
    UIButton *_qzoneButton;
    UIButton *_facebookButton;
    UIButton *_twitterButton;
    ImageSelectorController *_imageSelectorController;
    ContactsSelectorController *_contactsSelectorController;
    WCInputController *_inputController;
    _Bool _bHasInput;
    UIImageView *_inputView;
    UIButton *_expressionButton;
    unsigned int _iInputSection;
    id <WCCommitViewAnimationDelegate> _delegate;
    WCDataItem *_cacheDateItem;
    MMLoadingView *_loadingView;
    MMTimer *_fireTimer;
    WCLocationInfo *_poiInfo;
    WCMusicInfo *_musicInfo;
    _Bool _bNeedRefresh;
    _Bool _bNeedAnimation;
    _Bool _bShowLocation;
    _Bool _bHideAddView;
    unsigned long long _singlePasteTextMaxLength;
    WCTimelinePOIPickerViewController *_poiPickerViewController;
    NSString *_loadingOKStr;
    _Bool m_hasClickDone;
    _Bool bCommmitOnlyText;
    _Bool m_isUseMMAsset;
    _Bool m_hasConfirmReturn;
    _Bool m_hasICloudImage;
    _Bool m_bFromWCList;
    EmoticonBoardView *m_emoticonBoardView;
    CLLocation *m_imageLocation;
    NSArray *_tempSelectContacts;
}

- (void).cxx_destruct;
- (void)GroupTagViewSelectTempContacts:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)OnDone;
- (void)OnFacebookBinded;
- (void)OnPostTimeline;
- (void)OnReturn;
- (void)adjustSubviewRects;
- (void)afterProcessSingleImage;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
@property(nonatomic) _Bool bCommmitOnlyText; // @synthesize bCommmitOnlyText;
@property(nonatomic) _Bool bHideAddView; // @synthesize bHideAddView=_bHideAddView;
@property(nonatomic) _Bool bNeedAnimation; // @synthesize bNeedAnimation=_bNeedAnimation;
@property(nonatomic) _Bool bShowLocation; // @synthesize bShowLocation=_bShowLocation;
- (void)becomeInput;
- (void)beginAnimationStepOne;
- (void)beginAnimationStepTwo;
- (void)bindFacebook;
- (void)bindQQ;
- (void)cancelIcloudActivity;
- (_Bool)checkImageState;
- (void)commonInit;
- (_Bool)couldSelectContacts;
- (void)createSubviews;
- (void)dealloc;
@property(nonatomic) __weak id <WCCommitViewAnimationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCommitText:(id)arg1;
- (void)doExit;
- (void)facebookCheckAccessTokenValidFinished:(_Bool)arg1;
- (void)fbDidLogin;
- (void)fbDidNotLogin;
- (id)getShowAddress;
- (id)getViewController;
- (void)hideInputController;
- (void)imagesUpdated;
- (id)init;
- (void)initEmoticonView;
- (void)initInputController;
- (void)initInputToolView;
- (void)initView;
- (id)initWithImages:(id)arg1 contacts:(id)arg2;
- (void)keyboardDidHide;
- (void)keyboardWillShow;
@property(retain, nonatomic) NSString *loadingOKStr; // @synthesize loadingOKStr=_loadingOKStr;
@property(nonatomic) _Bool m_bFromWCList; // @synthesize m_bFromWCList;
@property(retain, nonatomic) EmoticonBoardView *m_emoticonBoardView; // @synthesize m_emoticonBoardView;
@property(nonatomic) _Bool m_hasConfirmReturn; // @synthesize m_hasConfirmReturn;
@property(nonatomic) _Bool m_hasICloudImage; // @synthesize m_hasICloudImage;
@property(retain, nonatomic) CLLocation *m_imageLocation; // @synthesize m_imageLocation;
@property(nonatomic) _Bool m_isUseMMAsset; // @synthesize m_isUseMMAsset;
@property(retain, nonatomic) WCMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onFacebookClicked:(id)arg1;
- (void)onLoadingShowOK:(id)arg1;
- (void)onLocationCellClicked;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onPrivacyCellClicked;
- (void)onQZoneClicked:(id)arg1;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)onTwitterClicked:(id)arg1;
- (void)onWCPostPrivacyChanged;
- (void)onWithContactCellClicked;
- (id)openOldText;
@property(retain, nonatomic) WCLocationInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
- (_Bool)processImage;
- (void)reloadData;
- (void)reloadExpressionButtonImage:(int)arg1;
- (void)removeOldText;
- (void)resignInput;
- (void)restoreLastShareOptions;
- (void)saveShareOptions;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) NSArray *tempSelectContacts; // @synthesize tempSelectContacts=_tempSelectContacts;
- (void)shareOptionsCheck;
- (_Bool)shouldJustReturnMMAsset;
- (_Bool)showAddView;
- (void)showLoadingView;
- (void)showPrivacyAlertView;
- (void)textViewTextDidChange;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)twitterAuthFinished:(int)arg1;
- (void)twitterCheckAccessTokenValidFinished:(int)arg1;
- (void)twitterWillStartOpenSafari;
- (void)updateContentOffset;
- (void)updateImageLocation:(unsigned int *)arg1;
- (void)updateSelectorView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)writeOldText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
