//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCPayOrderActivityControlItem : MMObject
{
    _Bool isButtonEnable;
    _Bool isButtonHidden;
    _Bool isActivityViewHidden;
    NSString *activityUrl;
    NSString *buttonTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *activityUrl; // @synthesize activityUrl;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle;
@property(nonatomic) _Bool isActivityViewHidden; // @synthesize isActivityViewHidden;
@property(nonatomic) _Bool isButtonEnable; // @synthesize isButtonEnable;
@property(nonatomic) _Bool isButtonHidden; // @synthesize isButtonHidden;

@end

