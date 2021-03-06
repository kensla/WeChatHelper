//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FTSJSEventDelegate.h"
#import "WCCommentDetailViewControllerFBDelegate.h"
#import "WSMusicDelegate.h"

@class MMUIViewController, NSString;

@interface WSJSEventHandler : NSObject <WCCommentDetailViewControllerFBDelegate, WSMusicDelegate, FTSJSEventDelegate>
{
    MMUIViewController *_baseViewController;
    id <WSJSEventHandleDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *baseViewController; // @synthesize baseViewController=_baseViewController;
- (void)dealloc;
@property(nonatomic) __weak id <WSJSEventHandleDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enableSearchBar;
- (void)hideKeyboard;
- (void)notifyPageOfMusicStatusChanged:(id)arg1;
- (void)onClickRecmdWord:(id)arg1;
- (void)onDeleteData;
- (void)onFailReceiveJson;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onLaunchPage:(id)arg1 withParams:(id)arg2;
- (void)onOpenBrandContact:(id)arg1 withParams:(id)arg2;
- (void)onOpenContact:(id)arg1;
- (void)onOpenMsgSession:(id)arg1;
- (void)onOpenSnsDetail:(id)arg1;
- (void)onPreSearch:(id)arg1;
- (void)onReceiveJson:(id)arg1;
- (void)onRequestLocalSuggestion:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (void)registerWSMusicHandler;
- (void)startMusicPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

