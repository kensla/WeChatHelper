//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, UIColor;

@interface SystemMsgTextWrap : NSObject <NSCoding>
{
    NSString *text;
    struct CGPoint origin;
    unsigned int width;
    UIColor *color;
    unsigned int font;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color; // @synthesize color;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) unsigned int font; // @synthesize font;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) struct CGPoint origin; // @synthesize origin;
@property(retain, nonatomic) NSString *text; // @synthesize text;
@property(nonatomic) unsigned int width; // @synthesize width;

@end

