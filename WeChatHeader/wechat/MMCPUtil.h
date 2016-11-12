//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMCPUtil : NSObject
{
}

+ (void)clearCrashCountWithKey:(id)arg1;
+ (id)cpKeyForChatRoomDisplayName:(id)arg1 userName:(id)arg2;
+ (id)cpKeyForClientCheckCgiReportCalculateMd5;
+ (id)cpKeyForClientCheckKvReportCalculateMd5;
+ (id)cpKeyForHeadImage:(id)arg1;
+ (id)cpKeyForHelloMsg:(id)arg1 content:(id)arg2;
+ (id)cpKeyForMessageWrap:(id)arg1;
+ (id)cpKeyForNickname:(id)arg1;
+ (id)cpKeyForSignature:(id)arg1;
+ (id)cpKeyForWCTimeLineComment:(id)arg1;
+ (id)cpKeyForWCTimeLineContent:(id)arg1;
+ (id)cpKeyForWCTimeLineLikeUsers:(id)arg1;
+ (id)cpKeyForWebviewURL:(id)arg1;
+ (void)decreaseCrashCountWithKey:(id)arg1;
+ (void)increaseCrashCountWithKey:(id)arg1;
+ (_Bool)isChatRoomDisplayNameUnsafe:(id)arg1 userName:(id)arg2;
+ (_Bool)isHeadImageUnsafe:(id)arg1;
+ (_Bool)isHelloMsgUnsafe:(id)arg1 content:(id)arg2;
+ (_Bool)isMessageWrapUnsafe:(id)arg1;
+ (_Bool)isNicknameUnsafe:(id)arg1;
+ (_Bool)isSignatureUnsafe:(id)arg1;
+ (_Bool)isUnsafeWithKey:(id)arg1;
+ (_Bool)isWCTimeLineCommentUnsafe:(id)arg1;
+ (_Bool)isWCTimeLineContentUnsafe:(id)arg1;
+ (_Bool)isWCTimeLineLikeUsersUnsafe:(id)arg1;
+ (_Bool)isWebviewURLUnsafe:(id)arg1;

@end
