//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "MMDBRestore.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMUILabel, NSString, UIButton;

@interface MMDBRestoreViewController : MMWindowViewController <MMDBRestore, UIAlertViewDelegate, WCActionSheetDelegate>
{
    MMUILabel *m_tipLabel;
    MMUILabel *m_commentLabel;
    UIButton *m_button;
    _Bool _isManualRestore;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)init;
- (void)initView;
@property(nonatomic) _Bool isManualRestore; // @synthesize isManualRestore=_isManualRestore;
- (void)onClear;
- (void)onClearDone;
- (void)onConfirm;
- (void)onFreeSpaceLow:(int)arg1;
- (void)onRebootWechat;
- (void)onRestoreBegin;
- (void)onRestoreEnd:(_Bool)arg1 error:(id)arg2;
- (void)onRestoreProgressUpdate:(float)arg1;
- (void)onShowDetail;
- (void)safeUpdateProgress:(float)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

