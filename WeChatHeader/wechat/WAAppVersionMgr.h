//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString;

@interface WAAppVersionMgr : MMService <MMService>
{
}

- (void)asyncUpdateNewestAppVersion:(id)arg1;
- (void)detectAppCanAccessWithAppContact:(id)arg1 localCacheVersion:(unsigned long long)arg2 isDebugMode:(_Bool)arg3 completeBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

