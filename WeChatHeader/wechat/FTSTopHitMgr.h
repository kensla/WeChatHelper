//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface FTSTopHitMgr : NSObject
{
    NSMutableArray *_arrTopHitContactItem;
    NSMutableArray *_arrTopHitAddressBookItem;
    NSMutableDictionary *_dicTopHitExtItem;
    NSMutableDictionary *_dicTopHitResultItem;
    NSMutableDictionary *_dicTopHitResultItemValue;
    NSMutableDictionary *_dicTopHitResultCache;
    NSString *_lastQueryText;
    _Bool _hasInit;
    _Bool _bNeedSearch;
    _Bool _needSaveContactTopHit;
    _Bool _needSaveAddressBookTopHit;
    _Bool _needSaveExtTopHit;
    unsigned int _thType;
    id <FTSTopHitDelegate> _delegateForContactSearch;
    id <FTSTopHitDelegate> _delegateForFeatureSearch;
}

- (void).cxx_destruct;
- (void)addScore:(id)arg1 arrTopHitItem:(id)arg2;
- (void)cancelSearch;
- (void)checkAndFillTimestamp;
- (void)clearTopHitResult;
- (void)clearTopHitValue;
- (unsigned int)convertFeatureIDFromItemKey:(id)arg1;
- (id)convertTopHitKeyFromType:(unsigned int)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <FTSTopHitDelegate> delegateForContactSearch; // @synthesize delegateForContactSearch=_delegateForContactSearch;
@property(nonatomic) __weak id <FTSTopHitDelegate> delegateForFeatureSearch; // @synthesize delegateForFeatureSearch=_delegateForFeatureSearch;
- (void)doInitWorker;
- (void)doReportTopHitStatus;
- (unsigned int)getTopHitCount:(unsigned int)arg1;
- (id)getTopHitItemKey:(id)arg1;
- (id)getTopHitItems:(unsigned int)arg1;
- (_Bool)hasTopHit:(unsigned int)arg1;
- (id)init;
- (void)initData;
- (id)initWithType:(unsigned int)arg1;
- (_Bool)isTopHitList:(id)arg1 keyContainsValue:(id)arg2;
- (void)logSearchInfo;
- (void)onAppTerminate;
- (void)onClearData;
- (void)onEnterBackGround;
- (void)onReloadData;
- (id)pathForTopHitAddressBookItem;
- (id)pathForTopHitContactItem;
- (id)pathForTopHitExtItem;
- (void)removeInvalidValue:(id)arg1 withTopHitItem:(id)arg2 withTopHitKey:(id)arg3;
- (void)searchTopHit:(id)arg1 dicCheckList:(id)arg2 matchTips:(id)arg3;
- (void)searchTopHit:(id)arg1 dicCheckList:(id)arg2 matchTips:(id)arg3 maxCount:(unsigned int)arg4;
- (void)selectItem:(id)arg1 type:(unsigned int)arg2;
- (_Bool)selectItemKey:(id)arg1 typeKey:(id)arg2;
- (void)setNeedsSearch;
- (void)sortTopHitValueList:(id)arg1;
- (void)tryLoadTopHitItem;
- (void)tryReportTopHitStatus;
- (void)trySaveTopHitAddressBookItem;
- (void)trySaveTopHitContactItem;
- (void)trySaveTopHitExtItem;
- (void)trySaveTopHitItem;

@end

