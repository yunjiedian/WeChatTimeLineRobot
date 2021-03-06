/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, SKBuiltinString_t, NSMutableArray, NSString;

@interface BakChatMsgItem : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned long long newMsgId;
@property(assign, nonatomic) unsigned bufferType;
@property(assign, nonatomic) unsigned bufferLength;
@property(retain, nonatomic) SKBuiltinBuffer_t* buffer;
@property(retain, nonatomic) NSMutableArray* mediaType;
@property(retain, nonatomic) NSMutableArray* mediaId;
@property(assign, nonatomic) unsigned mediaIdCount;
@property(assign, nonatomic) unsigned msgId;
@property(retain, nonatomic) NSString* msgSource;
@property(assign, nonatomic) unsigned clientMsgTime;
@property(assign, nonatomic) unsigned msgStatus;
@property(retain, nonatomic) SKBuiltinString_t* content;
@property(retain, nonatomic) SKBuiltinString_t* toUserName;
@property(retain, nonatomic) SKBuiltinString_t* fromUserName;
@property(retain, nonatomic) NSString* clientMsgId;
@property(assign, nonatomic) unsigned type;
+(void)initialize;
@end

