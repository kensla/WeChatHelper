//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface WAEmotionView : UIView
{
    NSArray *faces;
    double _iconSize;
    id <WAEmotionViewDelegate> delegate;
}

+ (_Bool)contains:(id)arg1;
+ (id)defaultEmoticons;
+ (unsigned long long)defaultEmoticonsCount;
- (void).cxx_destruct;
@property(nonatomic) id <WAEmotionViewDelegate> delegate; // @synthesize delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadEmotionView:(int)arg1 colnum:(int)arg2;
- (void)selected:(id)arg1;
- (void)setIconSize:(double)arg1;

@end

