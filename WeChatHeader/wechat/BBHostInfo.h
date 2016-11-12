//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BBHostInfo : NSObject
{
    struct _BBHostInfoValidity ipaddr_sa;
    NSString *_hostName;
    NSString *_hostAddress;
    NSString *_hostCandidate;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *hostAddress; // @synthesize hostAddress=_hostAddress;
@property(copy, nonatomic) NSString *hostCandidate; // @synthesize hostCandidate=_hostCandidate;
@property(readonly, copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (id)initWithHostNameOrNumber:(id)arg1;
- (struct _BBHostInfoValidity)isIPAddressStringValid:(id)arg1;
- (struct sockaddr *)validAddress;

@end
