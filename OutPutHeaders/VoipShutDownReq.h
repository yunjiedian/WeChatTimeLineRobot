/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSString, BaseRequest, VoipStatReportData;

@interface VoipShutDownReq : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned duration;
@property(assign, nonatomic) unsigned long long timestamp64;
@property(retain, nonatomic) VoipStatReportData* reportData;
@property(assign, nonatomic) long long roomKey;
@property(assign, nonatomic) int roomId;
@property(retain, nonatomic) NSString* fromUsername;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
