//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewControllerDelegate.h"

@class CContact, NSArray, NSString, SessionSelectView;

@protocol SessionSelectViewDelegate <MMUIViewControllerDelegate>
- (void)OnSelectSession:(CContact *)arg1 SelectView:(SessionSelectView *)arg2;

@optional
- (void)OnSelectCreateRoomSelectView:(SessionSelectView *)arg1;
- (void)OnSelectEnterpriseChat:(CContact *)arg1 SelectView:(SessionSelectView *)arg2;
- (void)OnSelectFromContactSelectView:(SessionSelectView *)arg1;
- (_Bool)OnShouldSelectSession:(CContact *)arg1 SelectView:(SessionSelectView *)arg2;
- (NSString *)onSessionSelectGetSearchString;
- (void)onSessionSelectSearch:(NSArray *)arg1;
- (void)selectViewWillBeginDragging:(SessionSelectView *)arg1;
@end
