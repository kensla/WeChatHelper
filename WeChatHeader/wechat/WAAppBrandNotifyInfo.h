//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WAAppBrandNotifyInfo : NSObject <PBCoding>
{
    _Bool isAlreadyDownload;
    unsigned int type;
    unsigned int debugStartTime;
    unsigned int debugEndTime;
    NSString *appid;
    NSString *username;
    NSString *debugURL;
    NSString *checkSum;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appid; // @synthesize appid;
@property(retain, nonatomic) NSString *checkSum; // @synthesize checkSum;
@property(nonatomic) unsigned int debugEndTime; // @synthesize debugEndTime;
@property(nonatomic) unsigned int debugStartTime; // @synthesize debugStartTime;
@property(retain, nonatomic) NSString *debugURL; // @synthesize debugURL;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) _Bool isAlreadyDownload; // @synthesize isAlreadyDownload;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *username; // @synthesize username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

