//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface DBContactBrand : NSObject <PBCoding>
{
    unsigned int brandSubscriptionSettings;
    NSString *brandExternalInfo;
    NSString *brandSubscriptConfigUrl;
    NSString *brandIconUrl;
    NSString *certificationInfo;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *brandExternalInfo; // @synthesize brandExternalInfo;
@property(retain, nonatomic) NSString *brandIconUrl; // @synthesize brandIconUrl;
@property(retain, nonatomic) NSString *brandSubscriptConfigUrl; // @synthesize brandSubscriptConfigUrl;
@property(nonatomic) unsigned int brandSubscriptionSettings; // @synthesize brandSubscriptionSettings;
@property(retain, nonatomic) NSString *certificationInfo; // @synthesize certificationInfo;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

