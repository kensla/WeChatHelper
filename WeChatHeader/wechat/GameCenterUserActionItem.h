//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, UIImage;

@interface GameCenterUserActionItem : MMObject
{
    _Bool _showRedDot;
    _Bool _hideBottomBorder;
    int _redDotNum;
    UIImage *_icon;
    NSString *_iconUrl;
    NSString *_badgeIconUrl;
    NSString *_title;
    long long _userActionType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *badgeIconUrl; // @synthesize badgeIconUrl=_badgeIconUrl;
- (void)dealloc;
@property(nonatomic) _Bool hideBottomBorder; // @synthesize hideBottomBorder=_hideBottomBorder;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) int redDotNum; // @synthesize redDotNum=_redDotNum;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long userActionType; // @synthesize userActionType=_userActionType;

@end
