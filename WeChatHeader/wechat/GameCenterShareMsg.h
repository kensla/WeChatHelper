//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GameCenterOldBaseMsg.h"

@class GameCenterMsgShareInfo;

@interface GameCenterShareMsg : GameCenterOldBaseMsg
{
    GameCenterMsgShareInfo *_shareInfo;
}

- (void).cxx_destruct;
- (id)getMsgCenterContent;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;
@property(retain, nonatomic) GameCenterMsgShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;

@end

