//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PSTNCheckNumberReqInfo : NSObject
{
    unsigned int _DialScene;
    NSString *_PureNumber;
    NSString *_ClientCountry;
    NSString *_LastCountry;
    NSString *_SimCountry;
    NSString *_OsCountry;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ClientCountry; // @synthesize ClientCountry=_ClientCountry;
@property(nonatomic) unsigned int DialScene; // @synthesize DialScene=_DialScene;
@property(copy, nonatomic) NSString *LastCountry; // @synthesize LastCountry=_LastCountry;
@property(copy, nonatomic) NSString *OsCountry; // @synthesize OsCountry=_OsCountry;
@property(copy, nonatomic) NSString *PureNumber; // @synthesize PureNumber=_PureNumber;
@property(copy, nonatomic) NSString *SimCountry; // @synthesize SimCountry=_SimCountry;

@end

